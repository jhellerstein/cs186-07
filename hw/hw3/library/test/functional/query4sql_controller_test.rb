require File.dirname(__FILE__) + '/../test_helper'
require 'query4sql_controller'

# Re-raise errors caught by the controller.
class Query4sqlController; def rescue_action(e) raise e end; end

class Query4sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query4sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
