CC=gcc

all: hello.o
	$(CC) -o hello hello.o
	rm hello.o
hello.o: hello.c
	$(CC) -c hello.c

clean:
	rm hello
