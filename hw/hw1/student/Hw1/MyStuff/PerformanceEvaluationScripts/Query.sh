#!/bin/bash

if test $# -ne 1 
then
echo "Usage: ./Query.sh <DATA DIRECTORY>"
exit 1
fi

#ifndef BIN_DIR
BIN_DIR=$HOME/pgsql/bin
#endif

agreed=0;
PATH=$INSTALL_DIR/pgsql/bin:$PATH
GREP=`which grep`
RM=/usr/bin/rm

# Start pg_ctl for query (Write log here)
$RM -rf "./Query.log"
echo "######## 3.1 pg_ctl start (for query test)"
$BIN_DIR/pg_ctl start -l "Query.log" -D $1
sleep 1;
while [ 0 == 0 ]; do
  if $GREP "database system is ready" Query.log; then
        break;
  fi;
  sleep 1;
done
echo "--> Started!"
echo

# execute query
echo "######## 3.2 execute query"
cat ./query.sql | $BIN_DIR/psql test
echo

# Stop pg_ctl
echo "######## 3.3 pg_ctl stop"
$BIN_DIR/pg_ctl stop -D $1
