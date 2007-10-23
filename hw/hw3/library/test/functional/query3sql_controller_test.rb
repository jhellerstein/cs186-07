require File.dirname(__FILE__) + '/../test_helper'
require 'query3sql_controller'

# Re-raise errors caught by the controller.
class Query3sqlController; def rescue_action(e) raise e end; end

class Query3sqlControllerTest < Test::Unit::TestCase
  def setup
    @controller = Query3sqlController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
