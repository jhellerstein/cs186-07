class Query4Controller < ApplicationController
   def index

@results = Array.new
authors = Author.find(:all) 
authors.each do |author|
   booksWrittenByAuth = Book.find(:all, :conditions =>   
"author='#{author.name}'")
      subjects_written = Hash.new

   booksWrittenByAuth.each do |book|
      subjects = Bindex.find(:all, :conditions =>
"isbn='#{book.isbn}'")      
       subjects.each do |different_subject|
      subjects_written[different_subject.subject] = '1'
end
end

      if subjects_written.length > 1
         books_in_Rabin = Instock.find(:all, :conditions => "lname='Rabin Library'")
         books_in_Rabin.each do |book_in_Rabin|

            author2 = Book.find(:first, :conditions => 
"isbn='#{book_in_Rabin.isbn}' and author='#{author.name}'")
         if author2 != nil
            @results << "#{author.name}, #{author2.title}"
         end
      end
end
end
   end
end
