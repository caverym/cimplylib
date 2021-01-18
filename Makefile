LIB=cimply
CC=gcc
CFLAGS=-Wall -g

build:
	gcc $(CFLAGS) -c $(LIB).c -o $(LIB).o
	ar r $(LIB).a $(LIB).o
	ranlib $(LIB).a

clean:
	rm $(LIB).a $(LIB).o

test:
	gcc $(CFLAGS) -o printall tests/test.c cimply.a
	./printall
	rm printall

env:
	$(CC) $(CFLAGS) -Dcimple_stdlib $(LIB).c -o $(LIB).o
	ar r $(LIB).a $(LIB).o
	ranlib $(LIB).a

debug:
	gcc $(CFLAGS) -o printall tests/test.c cimply.a
	gdb ./printall
	rm printall