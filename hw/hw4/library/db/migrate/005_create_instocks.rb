class CreateInstocks < ActiveRecord::Migration
  def self.up
    create_table :instocks do |t|
       t.column :isbn, :integer
       t.column :edition, :integer
       t.column :lname, :string
       t.column :quantity, :integer
    end
  end

  def self.down
    drop_table :instocks
  end
end
