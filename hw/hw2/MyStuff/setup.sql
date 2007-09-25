create table test(id integer, bounding_box box);
copy test from 'randomboxes' delimiter ';' ;
create index boxix on test using gist (bounding_box box_ops);
