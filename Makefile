LIB=cimply
CC=gcc
CFLAGS=-Wall -g

build:
	gcc $(CFLAGS) -c $(LIB).c $(LIB).o
	ar r $(LIB).a $(LIB).o
	ranlib $(LIB).a
