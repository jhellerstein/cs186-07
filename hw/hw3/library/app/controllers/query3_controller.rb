class Query3Controller < ApplicationController
   def index
      @results = Array.new
      books = Book.find(:all)
      books.each do |book|
         found = Bindex.count :conditions => "isbn='#{book.isbn}' and 
            subject='#{book.author}'"
         if found > 0
               bplace = Author.find(:first, :conditions => "name = '#{book.author}'")
            libraries = Library.find(:all, :conditions => 
"city='#{bplace.bplace}'")
            libraries.each do |library|
                  book_exists = Instock.count :conditions => "isbn='#{book.isbn}' 
                     and lname='#{library.lname}'"
                  if book_exists > 0
                     @results << book.title
                  end
              end
         
         end
      end
   end
end
