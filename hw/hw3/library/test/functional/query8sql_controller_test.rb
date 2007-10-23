require File.dirname(__FILE__) + '/../test_helper'
require 'query8sql_controller'

# Re-raise errors caught by the controller.
class Query8sqlController; def rescue_action(e) raise e end; end

class Query8sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query8sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
