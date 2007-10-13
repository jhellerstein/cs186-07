#!/bin/csh

# restart server so that it chooses index scan over heap scan 
pg_ctl restart -o "-fs -fb"
sleep 5

####
#### configuration
####
# set up output directory
mkdir -p runtests.out

# set up tables
psql -q -f runtests_setup.sql

#### Make sure basic near neighbor works on a few tuples
####
# SeqScan: 
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan25 where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0 order by dist" >! runtests.out/1
# index
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist25 where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0" >! runtests.out/2
if ( `diff runtests.out/1 runtests.out/2` != '' ) echo 'OnePageNN failure'

#### Bigger tables
####
# SeqScan: 
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0 order by dist" >! runtests.out/3
# index
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist where the_box ~~ '(0.5,0.5,0.5,0.5)' and box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') > 0" >! runtests.out/4
if ( `diff runtests.out/3 runtests.out/4` != '' ) echo 'BasicNN failure'

####
#### Make sure selections work
####
# SeqScan: 
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testscan where the_box >> '(0.5,0.5,0.5,0.5)' order by dist" >! runtests.out/5
# index
psql -c "select id, box_mindistance(the_box, '(0.5,0.5,0.5,0.5)') as dist from testgist where the_box >> '(0.5,0.5,0.5,0.5)'" >! runtests.out/6
if ( `diff runtests.out/5 runtests.out/6` != '' ) echo 'SelectionNN failure'

####
#### Rectangle query
####
# Check the answer sets are the same
if ( `psql -t -c "select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)' except select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)'"` != '' ) echo 'Rectangle failure: mismatch on zeros'
# SeqScan:
psql -c "select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testscan where the_box ~~ '(0.5,0.7,0.5,0.7)' and box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') > 0 order by dist" >! runtests.out/7
# index
psql -c "select id, box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') as dist from testgist where the_box ~~ '(0.5,0.7,0.5,0.7)' and box_mindistance(the_box, '(0.5,0.7,0.5,0.7)') > 0" >! runtests.out/8
if ( `diff runtests.out/7 runtests.out/8` != '' ) echo 'Rectangle failure'
