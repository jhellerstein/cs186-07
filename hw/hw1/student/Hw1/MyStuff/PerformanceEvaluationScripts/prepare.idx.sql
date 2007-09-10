CREATE TABLE raw_r_tuples (tname varchar(2), pkey int, num2 int, num3 int, num1 int, node varchar(16), inserttime float8, lifetime float8, testname varchar(64));
CREATE TABLE raw_s_tuples (tname varchar(2), pkey int PRIMARY KEY, num2 int, num3 int, num1 int, node varchar(16), inserttime float8, lifetime float8, testname varchar(64));
\set mySpath '\''`pwd`'/S\''
\set myRpath '\''`pwd`'/R\''
COPY raw_s_tuples FROM :mySpath DELIMITERS ',';
\echo :mySpath
COPY raw_r_tuples FROM :myRpath DELIMITERS ',';
\echo :myRpath
