require File.dirname(__FILE__) + '/../test_helper'
require 'query7sql_controller'

# Re-raise errors caught by the controller.
class Query7sqlController; def rescue_action(e) raise e end; end

class Query7sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query7sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
