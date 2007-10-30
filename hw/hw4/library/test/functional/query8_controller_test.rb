require File.dirname(__FILE__) + '/../test_helper'
require 'query8_controller'

# Re-raise errors caught by the controller.
class Query8Controller; def rescue_action(e) raise e end; end

class Query8ControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query8Controller.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
