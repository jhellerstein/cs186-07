require File.dirname(__FILE__) + '/../test_helper'
require 'libraries_controller'

# Re-raise errors caught by the controller.
class LibrariesController; def rescue_action(e) raise e end; end

class LibrariesControllerTest < Test::Unit::TestCase
  def setup
    @controller = LibrariesController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
