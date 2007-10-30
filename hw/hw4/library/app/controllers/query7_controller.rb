class Query7Controller < ApplicationController
   def index
      @results = Array.new
subjects_written = Hash.new
subjects = Bindex.find(:all)
subjects.each do |subject|
   subjects_written[subject.subject] = 1
end

french_authors = Author.find(:all, :conditions => "citizenship='France'")
french_authors.each do |french_author|
   subjects_of_author = Hash.new
   books_by_author = Book.find(:all, :conditions => 
      "author='#{french_author.name}'")
   books_by_author.each do |book_by_author|
      subjects = Bindex.find(:all, :conditions => 
         "isbn='#{book_by_author.isbn}'")
      subjects.each do |subject|
         subjects_of_author[subject.subject] = 1
      end
   end

   subjects_written.each do |key, value|
      if subjects_of_author[key] == nil
         subjects_written.delete(key)
      end
   end
end

subjects_written.each do |key, value|
   @results << key
end

   end
end
