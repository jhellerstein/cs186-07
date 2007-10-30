require File.dirname(__FILE__) + '/../test_helper'
require 'query7_controller'

# Re-raise errors caught by the controller.
class Query7Controller; def rescue_action(e) raise e end; end

class Query7ControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query7Controller.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
