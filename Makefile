LIB=libcimply
CC=gcc
CFLAGS=-Wall -g -fPIC

build:
	$(CC) $(CFLAGS) -c $(LIB).c -o $(LIB).o
	ar rcs $(LIB).a $(LIB).o
	ranlib $(LIB).a
	gcc --shared $(LIB).o -o $(LIB).so

clean:
	rm $(LIB).a $(LIB).o $(LIB).so

test:
	$(CC) $(CFLAGS) -o printall tests/test.c cimply.a
	./printall
	rm printall

install:
	install -Dm 744 $(LIB).so /usr/lib/$(LIB).so
	install -Dm 744 $(LIB).h /usr/include/$(LIB).h

uninstall:
	rm /usr/lib/$(LIB).so
	rm /usr/include/$(LIB).h
