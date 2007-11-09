require File.dirname(__FILE__) + '/../test_helper'
require 'librarymaps_controller'

# Re-raise errors caught by the controller.
class LibrarymapsController; def rescue_action(e) raise e end; end

class LibrarymapsControllerTest < Test::Unit::TestCase
  def setup
    @controller = LibrarymapsController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_index
    get :index, :changelibrary => {:newlibrary=>'Gustav Library'}
    assert_response :success 
  end

  def test_bad_geoloc
    l = Library.new
    l.city = "Hellerstein"
    l.lname = "Nothing Library"
    l.save
    assert_raises(RuntimeError) do
      get :index, :changelibrary => {:newlibrary=>'Nothing Library'}
    end
  end
end
