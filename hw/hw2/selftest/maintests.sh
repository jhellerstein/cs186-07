#!/bin/tcsh


####
#### configuration
####
# set up output directory
mkdir -p runtests.out

# generate query file
sed 's.%HOME%.'${HOME}'.g' < maintests.sql.in >! maintests.sql

# run queries
$HOME/pgsql/bin/psql -q -t -f maintests.sql -p $PGPORT >&! /dev/null

# check output
if ( `gdiff -q $HOME/Hw2/selftest/outputs/output_dist runtests.out/1` != '' ) echo 'Distance Function failure'
if ( `gdiff -q $HOME/Hw2/selftest/outputs/output_1page runtests.out/2` != '' ) echo 'OnePageNN failure'
if ( `gdiff -q $HOME/Hw2/selftest/outputs/output_nn runtests.out/4` != '' ) echo 'BasicNN failure'
if ( `gdiff -q $HOME/Hw2/selftest/outputs/output_select runtests.out/6` != '' ) echo 'SelectionNN failure'
# if ( `cat runtests.out/10` != '') echo 'Rectangle failure: mismatch on zeros'
if ( `gdiff -q $HOME/Hw2/selftest/outputs/output_rect runtests.out/8` != '' ) echo 'Rectangle failure'

