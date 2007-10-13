--
-- Change the paths in the copy commands to get this working!
--

drop table if exists testgist;
drop table if exists testscan;
drop table if exists testgist25;
drop table if exists testscan25;
create table testgist(id integer, the_box box);
copy testgist from '/Users/joeh/devel/Hw2/MyStuff/randomboxes' delimiter ';' ;
create index testgistix on testgist using gist (the_box box_ops);

create table testscan(id integer, the_box box);
copy testscan from '/Users/joeh/devel/Hw2/MyStuff/randomboxes' delimiter ';' ;

create table testgist25 (id integer, the_box box);
copy testgist25 from '/Users/joeh/devel/Hw2/MyStuff/randomboxes25' delimiter ';' ;
create index testgist25ix on testgist25 using gist (the_box box_ops);

create table testscan25(id integer, the_box box);
copy testscan25 from '/Users/joeh/devel/Hw2/MyStuff/randomboxes25' delimiter ';' ;
