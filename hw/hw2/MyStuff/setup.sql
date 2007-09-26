create table test(id integer, the_box box);
copy test from '/home/cc/cs186/fa07/coass/cs186-XX/Hw2/MyStuff/randomboxes' delimiter ';' ;
create index ix1 on test using gist (the_box box_ops);
create table test25 (id integer, the_box box);
copy test25 from '/home/cc/cs186/fa07/class/cs186-XX/Hw2/MyStuff/randomboxes25' delimiter ';' ;
create index ix2 on test25 using gist (the_box box_ops);
create table cali(location box, name text);
copy cali from  '/home/cc/cs186/fa07/class/cs186-XX/Hw2/MyStuff/cali.txt' delimiter '|';
create index cali_ix on cali using gist(location box_ops);
