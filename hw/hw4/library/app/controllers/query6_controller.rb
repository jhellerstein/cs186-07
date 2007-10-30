class Query6Controller < ApplicationController
   def index
      @results = Array.new
evans_max_quantity = 0
evans_max_quantity = Instock.maximum :quantity, :conditions => "lname='Evans Library'"
books_in_cao = Instock.find(:all, :conditions => "lname='Cao Library' and quantity 
> '#{evans_max_quantity}'")
books_in_cao.each do |book|
   title = Book.find(:first, :conditions => "isbn = '#{book.isbn}'")
   if title != nil
      @results << "#{title.title}, #{book.edition}"
   end
end
   end
end
