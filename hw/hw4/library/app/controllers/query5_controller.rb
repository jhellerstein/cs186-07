class Query5Controller < ApplicationController
   def index
      num = 0
@results = Array.new
isbn = Book.find(:first, :conditions => "title='Why I went to Stanford'")
libraries = Instock.find(:all, :conditions => "isbn='#{isbn.isbn}'")
libraries.each do |library|
   num = Library.count :conditions => "lname = '#{library.lname}' and (city='San 
Francisco' or city='Berkeley')"
   if num > 0
      @results << "Yes"
      break
   end
end
if num == 0
   @results << "No"
end

   end
end
