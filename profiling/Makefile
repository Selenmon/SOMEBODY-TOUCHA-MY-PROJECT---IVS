all: odchylka.o
	gcc -o odchylka odchylka.o -lm
odchylka .o: odchylka.c
	gcc -c odchylka.c -lm
mem: odchylka
	valgrind --leak-check=full ./odchylka

clean:
	rm odchylka.o && rm odchylka
