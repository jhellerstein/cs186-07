class CreateBindices < ActiveRecord::Migration
  def self.up
    create_table :bindices do |t|
       t.column :isbn, :integer
       t.column :subject, :string
    end
  end

  def self.down
    drop_table :bindices
  end
end
