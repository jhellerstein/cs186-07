#!/bin/csh


####
#### configuration
####
# set up output directory
mkdir -p runtests.out

# run queries
psql -q -t -f runtests_setup.sql

# check output
if ( "`gdiff -q runtests.out/1 runtests.out/2`" != "" ) echo 'OnePageNN failure'
if ( "`gdiff -q runtests.out/3 runtests.out/4`" != "" ) echo 'BasicNN failure'
if ( "`gdiff -q runtests.out/5 runtests.out/6`" != "" ) echo 'SelectionNN failure'
if ( "`cat runtests.out/10`" != "") echo 'Rectangle failure: mismatch on zeros'
if ( "`gdiff -q runtests.out/7 runtests.out/8`" != "" ) echo 'Rectangle failure'
