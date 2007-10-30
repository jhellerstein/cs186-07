class Query7sqlController < ApplicationController
   def index
       # substitute the following SQL statement with the appropriate one that
       # answers the query.
       @results = Author.find_by_sql("select name from authors")
   end
end
