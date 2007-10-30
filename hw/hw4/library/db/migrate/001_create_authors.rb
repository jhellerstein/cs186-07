class CreateAuthors < ActiveRecord::Migration
  def self.up
    create_table :authors do |t|
       t.column :name, :string
       t.column :citizenship, :string
       t.column :byear, :integer
       t.column :bplace, :string
    end
  end

  def self.down
    drop_table :authors
  end
end
