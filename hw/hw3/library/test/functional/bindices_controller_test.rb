require File.dirname(__FILE__) + '/../test_helper'
require 'bindices_controller'

# Re-raise errors caught by the controller.
class BindicesController; def rescue_action(e) raise e end; end

class BindicesControllerTest < Test::Unit::TestCase
  def setup
    @controller = BindicesController.new
    @request    = ActionController::TestRequest.new
    @response   = ActionController::TestResponse.new
  end

  # Replace this with your real tests.
  def test_truth
    assert true
  end
end
