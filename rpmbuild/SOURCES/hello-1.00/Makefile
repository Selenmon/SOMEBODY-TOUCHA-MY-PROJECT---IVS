CC=gcc
DESTDIR ?=
PREFIX ?= /usr/local

hello: hello.o
	$(CC) -o hello hello.o
	rm hello.o
hello.o: hello.c
	$(CC) -c hello.c

install: hello
	install -m 0755 -d $(DESTDIR)$(PREFIX)/bin
	install -m 0755 hello $(DESTDIR)$(PREFIX)/bin
clean:
	rm hello
