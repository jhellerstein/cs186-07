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
  def test_truth
    assert true
  end
end
