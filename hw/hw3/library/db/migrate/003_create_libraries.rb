class CreateLibraries < ActiveRecord::Migration
  def self.up
    create_table :libraries do |t|
       t.column :lname, :string
       t.column :city, :string
    end
  end

  def self.down
    drop_table :libraries
  end
end
