require File.dirname(__FILE__) + '/../test_helper'
require 'query5_controller'

# Re-raise errors caught by the controller.
class Query5Controller; def rescue_action(e) raise e end; end

class Query5ControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query5Controller.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
