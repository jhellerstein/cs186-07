#!/bin/tcsh
# back up student's geo_ops.c file
/bin/cp $HOME/Hw2/postgresql-8.2.4/src/backend/utils/adt/geo_ops.c ./geo_ops_student.c
/bin/cp geo_ops_master.c $HOME/Hw2/postgresql-8.2.4/src/backend/utils/adt/geo_ops.c
pushd $HOME/Hw2/postgresql-8.2.4/src/backend
gmake install >&! ./compile.out
if (`grep "\*\*\*" compile.out` != "") then
  echo "XXXX COMPILATION ERROR"
  exit 1
endif
$HOME/pgsql/bin/pg_ctl restart -l ./pglog -o "-fs -fb" >&! /dev/null
popd
sleep 2
./memtest.sh >&! mem.out
/bin/cp geo_ops_student.c $HOME/Hw2/postgresql-8.2.4/src/backend/utils/adt/geo_ops.c
pushd $HOME/Hw2/postgresql-8.2.4/src/backend
gmake install >&! ./compile.out
if (`grep "\*\*\*" compile.out` != "") then
  echo "XXXX COMPILATION ERROR"
  exit 1
endif
$HOME/Hw2/pgsql/bin/pg_ctl restart -l ./pglog -o "-fs -fb" >&! /dev/null
popd
sleep 2
./maintests.sh >&! main.out
echo "== Failed Tests Listed Below =="
cat mem.out
cat main.out
echo
endif


