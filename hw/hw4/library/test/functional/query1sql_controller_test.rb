require File.dirname(__FILE__) + '/../test_helper'
require 'query1sql_controller'

# Re-raise errors caught by the controller.
class Query1sqlController; def rescue_action(e) raise e end; end

class Query1sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query1sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
