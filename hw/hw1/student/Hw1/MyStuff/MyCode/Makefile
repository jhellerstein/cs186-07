CPP=gcc
OPTS=-g -Wall
LIBS=-lresolv -ldl -lm
INCLUDE=-I../../postgresql-8.0.3/src/include

all: buftest

stubs.o: stubs.c
	$(CPP) $(OPTS) $(INCLUDE) -c -o stubs.o stubs.c

freelist.o: freelist.c
	$(CPP) $(OPTS) $(INCLUDE) -c -o freelist.o freelist.c

buftest: buftest.c stubs.o freelist.o
	$(CPP) $(OPTS) $(LIBS) $(INCLUDE) -o buftest buftest.c stubs.o freelist.o

clean:
	rm -rf *.o
	rm -rf buftest

# for building postgresql

mypgsql: copymypgsql pgsql

origpgsql: copyorigpgsql pgsql

copymypgsql:
	cp freelist.c $(HOME)/Hw1/postgresql-8.0.3/src/backend/storage/buffer/f\
reelist.c

copyorigpgsql:
	cp freelist.postgres-original.c $(HOME)/Hw1/postgresql-8.0.3/src/backen\
d/storage/buffer/freelist.c

pgsql:
	cd $(HOME)/Hw1/postgresql-8.0.3/ && gmake && gmake install
