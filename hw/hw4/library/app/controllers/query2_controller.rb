class Query2Controller < ApplicationController
   def index
      @results = Array.new
      libraries = Library.find(:all, :conditions => "city='Boston'")
      libraries.each do |library|
         in_stock_books = Instock.find(:all, :conditions => 
            "lname='#{library.lname}'")
         in_stock_books.each do |in_stock_book|
            is_db_book = Bindex.count :conditions => 
                "subject='Databases' and isbn='#{in_stock_book.isbn}'"

            if is_db_book == 1
               book_author = Book.find(:first, :conditions => 
                  "isbn='#{in_stock_book.isbn}'")
               author = Author.find(:first, :conditions => 
                  "name='#{book_author.author}'")
               if author != nil 
                  @results << author.bplace
               end
            end
         end
      end
   end
end
