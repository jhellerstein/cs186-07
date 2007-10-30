require File.dirname(__FILE__) + '/../test_helper'
require 'instocks_controller'

# Re-raise errors caught by the controller.
class InstocksController; def rescue_action(e) raise e end; end

class InstocksControllerTest < Test::Unit::TestCase
  def setup
    @controller = InstocksController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
