all: odchylka.o
	gcc -o odchylka odchylka.o -lm
odchylka .o: odchylka.c
	gcc -c odchylka.c -lm
mem: odchylka
	valgrind --leak-check=full ./odchylka

prof: odchylka
	gcc -lm -pg ./odchylka.c -o odchylka
	./odchylka
	gprof odchylka gmon.out > report.txt

	
clprof:
	rm gmon.out && rm report.txt && rm odchylka && rm odchylka.o
clean:
	rm odchylka.o && rm odchylka
