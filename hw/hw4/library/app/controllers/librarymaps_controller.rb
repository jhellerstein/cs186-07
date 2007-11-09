require 'ym4r/google_maps/geocoding'

class LibrarymapsController < ApplicationController
  def index
    # Start timekeeping
    starttime = Time.now
    
    # Default library
    libraryname = 'Evans Library' 

    # Get the library name from the form if it exists.
    if params[:changelibrary] != nil
      formobj = params[:changelibrary]
      libraryname = formobj[:newlibrary]
    end

    # Retrieve the list of libraries for the Select (Drop Down) Box
    # "@" preceding a variable name indicates an instance variable.
    # Instance variables can be passed to views, whereas
    # local variables (variable names without preceding "@") cannot
    # be passed to views.
    @alllibraries = Array.new 
    alllibraries1 = Library.find(:all, :order => "city,lname")
    alllibraries1.each do |library|
      @alllibraries << ["#{library.lname} in #{library.city}",library.lname]
    end

    # Find the lat/lon of the library of interest.
    @mylibrary = Library.find(:first, 
                              :conditions => "lname = '#{libraryname}'")

    # This is a Remote Procedure Call (RPC).  This particular type
    # of call (translating a location name like "Berkeley" into 
    # lat/lon coordinates) is known as geocoding.
    geoloc = Ym4r::GoogleMaps::Geocoding::get(@mylibrary.city)
    if geoloc.status != Geocoding::GEO_SUCCESS
      err = 'Library Coordinates Not Found'
      return err
    end
    liblatlon = geoloc[0].latlon

    # Initialize map and center it over the library of interest
    @map = GMap.new("map_div")
    @map.control_init(:large_map => true,:map_type => true)
    @map.center_zoom_init(liblatlon,2) # zoom out a fair amount

    # Make a library marker and icon
    @map.icon_global_init(GIcon.new(:image => "/images/library.png", 
                                    :icon_size => GSize.new(20,20),
                                    :icon_anchor => GPoint.new(10,10),
                                    :info_window_anchor => GPoint.new(9,2)),
                          "icon_library")
    icon_construction = Variable.new("icon_library")
    @map.overlay_init(GMarker.new(liblatlon,
                                  :icon => icon_construction,
                                  :title => libraryname, 
                                  :info_window => libraryname))

    # The following code fetches all the authors, geocodes their birthplaces,
    # computes distance to the library, sorts by distance, and plots the
    # top 15 closest.  This chunk is not going to scale well as we 
    # increase the number of authors!

    # Suck all the authors out of the database into a Ruby array, and
    # loop through them.
    @authors = Array.new
    results = Author.find(:all)
    results.each do |result|

      # This is another geocoding RPC.
      # A potentially large number of authors are all geocoded.
      # This is a good candidate for caching.
      geoloc = Ym4r::GoogleMaps::Geocoding::get(result.bplace)

      # Calculate the author's birthplace's distance from the library
      if geoloc.status == Geocoding::GEO_SUCCESS
        authlatlon = geoloc[0].latlon
        # Distances recalculated from a relatively stable  set of libraries.
        # This is a good candidate for caching.
        dist = distance_between(authlatlon,liblatlon).floor
        @authors << [result.name,result.bplace,dist,authlatlon]
      end
    end

    # Sort authors in place by dist.  "sort!" means in place.
    @authors.sort! {|x,y| x[2] <=> y[2] }
    # truncate the array to just the top 10
    @authors = @authors[0..9]

    @authors.each do |a|
        @map.overlay_init(GMarker.new(a[3],
                                      :title => a[0],
                                      :info_window => "#{a[0]} says:<br> I am #{a[2]} miles away<br> from #{@mylibrary.lname}"))
    end
    # Measure speed of server-side operation.
    # Typical times w/  RPC on 17 authors: 3.5 seconds
    # Typical times w/o RPC on 17 authors: 0.3 seconds
    # Rhombus server fluctuations will cause this value to vary.
    endtime = Time.now
    @elapsedtime = endtime - starttime
  end
end

# helper functions copied from GeoKit by Andre Lewis

PI_DIV_RAD = 0.0174
KMS_PER_MILE = 1.609
EARTH_RADIUS_IN_MILES = 3963.19
EARTH_RADIUS_IN_KMS = EARTH_RADIUS_IN_MILES * KMS_PER_MILE
MILES_PER_LATITUDE_DEGREE = 69.1
KMS_PER_LATITUDE_DEGREE = MILES_PER_LATITUDE_DEGREE * KMS_PER_MILE
LATITUDE_DEGREES = EARTH_RADIUS_IN_MILES / MILES_PER_LATITUDE_DEGREE  


def distance_between(from, to, options={})
#  units = options[:units] || GeoKit::default_units 
#  formula = options[:formula] || GeoKit::default_formula
  units = :miles
  formula = :sphere
  case formula
  when :sphere          
    units_sphere_multiplier(units) * 
      Math.acos( Math.sin(deg2rad(from[0])) * Math.sin(deg2rad(to[0])) + 
                 Math.cos(deg2rad(from[0])) * Math.cos(deg2rad(to[0])) * 
                 Math.cos(deg2rad(to[1]) - deg2rad(from[1])))   
  when :flat
    Math.sqrt((units_per_latitude_degree(units)*(from[0]-to[0]))**2 + 
              (units_per_longitude_degree(from[0], units)*(from[1]-to[1]))**2)
  end
end

def deg2rad(degrees)
  degrees.to_f / 180.0 * Math::PI
end

def rad2deg(rad)
  rad.to_f * 180.0 / Math::PI 
end

def to_heading(rad)
  (rad2deg(rad)+360)%360
end

# Returns the multiplier used to obtain the correct distance units.
def units_sphere_multiplier(units)
  units == :miles ? EARTH_RADIUS_IN_MILES : EARTH_RADIUS_IN_KMS
end

# Returns the number of units per latitude degree.
def units_per_latitude_degree(units)
  units == :miles ? MILES_PER_LATITUDE_DEGREE : KMS_PER_LATITUDE_DEGREE
end

# Returns the number units per longitude degree.
def units_per_longitude_degree(lat, units)
  miles_per_longitude_degree = (LATITUDE_DEGREES * Math.cos(lat * PI_DIV_RAD)).abs
  units == :miles ? miles_per_longitude_degree : miles_per_longitude_degree * KMS_PER_MILE
end  
