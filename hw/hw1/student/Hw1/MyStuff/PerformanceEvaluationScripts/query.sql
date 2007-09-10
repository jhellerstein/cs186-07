SELECT R.num1, S.pkey, R.node, S.node, R.inserttime, S.inserttime FROM raw_r_tuples R, raw_s_tuples S WHERE R.num1=S.pkey;
