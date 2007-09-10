#!/bin/bash

if test $# -lt 1 
then
echo "Usage: ./PrepareTables.sh <DATA DIRECTORY> [index (optional)]"
exit 1
fi

#ifndef BIN_DIR
BIN_DIR=$HOME/pgsql/bin
#endif

GREP=`which grep`
RM=/usr/bin/rm

# Start database to create tables
echo "######## 2.1 pg_ctl start"
$BIN_DIR/pg_ctl start -D $1 -l pre.log 
sleep 1;
while [ 0 == 0 ]; do
  if $GREP "database system is ready" pre.log; then
    break;
  fi;
  sleep 1;
done
echo "--> Started!"
echo

# Create Database "test" and tables.
echo "######## 2.2 create db and tables"
echo "CREATE DATABASE test" | $BIN_DIR/psql template1

if [ "$2" == "index" ]; then
  cat ./prepare.idx.sql | $BIN_DIR/psql test
else
    cat ./prepare.sql | $BIN_DIR/psql test
fi

echo "--> Created!"
echo

# Stop pg_ctl
echo "######## 2.3 pg_ctl stop"
$BIN_DIR/pg_ctl stop -D $1
