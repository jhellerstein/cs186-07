class Query8Controller < ApplicationController
   def index
     @results = Array.new
libs = Array.new
libraries = Instock.find(:all)
libraries = libraries.sort_by{|tuple| tuple.lname}
lib = libraries[1].lname
sum = 0
exported = 0
libraries.each do |library|
      if sum >= 10 && exported == 0
         libs << lib
         exported = 1
      end

   if library.lname != lib
      sum = 0
      exported = 0
      lib = library.lname
   end
   sum = sum + library.quantity
end


libs.each do |lib|
   num_authors = Hash.new
   books = Instock.find(:all, :conditions => "lname='#{lib}'")
   books.each do |book|
      author = Book.find(:first, :conditions => "isbn='#{book.isbn}'")
      num_authors[author.author] = 1
   end
   @results << "#{lib}, #{num_authors.length}"
end
   end
end
