class Query1Controller < ApplicationController
   def index
      @results = Author.find(:all, :conditions => "citizenship='France' or citizenship='Germany'")
   end
end
