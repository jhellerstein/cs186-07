#!/bin/tcsh


####
#### configuration
####
# set up output directory
mkdir -p runtests.out

# run queries
$HOME/pgsql/bin/psql -t -f memtest.sql >&! /dev/null

