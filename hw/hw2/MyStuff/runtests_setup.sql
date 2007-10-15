--
-- Change the paths in the copy commands to get this working!
--
drop table if exists testgist;
drop table if exists testscan;
drop table if exists testgist25;
drop table if exists testscan25;
create table testgist(id integer, the_box box);
copy testgist from '/Users/joeh/devel/hw2/MyStuff/randomboxes' delimiter ';' ;
create index testgistix on testgist using gist (the_box box_ops);

create table testscan(id integer, the_box box);
copy testscan from '/Users/joeh/devel/hw2/MyStuff/randomboxes' delimiter ';' ;

create table testgist25 (id integer, the_box box);
copy testgist25 from '/Users/joeh/devel/hw2/MyStuff/randomboxes25' delimiter ';' ;
create index testgist25ix on testgist25 using gist (the_box box_ops);

create table testscan25(id integer, the_box box);
copy testscan25 from '/Users/joeh/devel/hw2/MyStuff/randomboxes25' delimiter ';' ;


--
-- Run queries
--

--
-- Make sure basic near neighbor works on a few tuples
--
-- SeqScan: 
set enable_seqscan to off;
\o runtests.out/1
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan25 where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0 order by dist;
-- index
\o runtests.out/2
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist25 where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0;

-- Bigger tables
--
-- SeqScan: 
\o runtests.out/3
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0 order by dist;
-- index
\o runtests.out/4
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0;

--
-- Make sure selections work
--
-- SeqScan: 
\o runtests.out/5
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan where the_box >> '(0.5,0.5,0.5,0.5)' order by dist;
-- index
\o runtests.out/6
select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist where the_box >> '(0.5,0.5,0.5,0.5)';

--
-- Rectangle query
--
-- Check the answer sets are the same
\o runtests.out/10
select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)' except select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)';
-- SeqScan:
\o runtests.out/7
select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)' and box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') > 0 order by dist;
-- index
\o runtests.out/8
select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testgist where the_box ~~ '(0.5,0.7,0.5,0.7)' and box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') > 0;


--
-- Drop tables
--
drop table testscan;
drop table testgist;
drop table testscan25;
drop table testgist25;
