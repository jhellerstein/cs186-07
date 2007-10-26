#!/bin/tcsh


####
#### configuration
####
# set up output directory
mkdir -p runtests.out

# run queries
$HOME/pgsql/bin/psql -q -t -f memtest.sql >&! /dev/null

# check output
if ( `grep mmgr runtests.out/mem` != '' ) echo 'mmgr failure'


