require File.dirname(__FILE__) + '/../test_helper'
require 'query2sql_controller'

# Re-raise errors caught by the controller.
class Query2sqlController; def rescue_action(e) raise e end; end

class Query2sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query2sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
