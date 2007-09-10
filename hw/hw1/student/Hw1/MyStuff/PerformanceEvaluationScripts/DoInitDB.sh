#!/bin/bash

#ifndef BIN_DIR
BIN_DIR=${HOME}/pgsql/bin
#endif

agreed=0;
GREP=`which grep`
RM=`which \rm`

if test $# -ne 1
then
echo "Usage: ./DoInitDB.sh <DATA DIRECTORY>"
exit 1
fi 

echo "!!!! We are going to totally remove" $1 ", Continue? (Yes or No)"
read resp leftover
case "$resp" in
  y* | Y*)
    agreed=1;
esac

if [ $agreed == 0 ]; then
  exit 1;
fi

echo

# Initialize database
echo "######## 1.1 rm -rf" $1

\rm -rf $1
echo "--> Removed!"
echo
echo "######## 1.2 $BIN_DIR/initdb -D "$1

$BIN_DIR/initdb -D $1 
echo "DONE."
