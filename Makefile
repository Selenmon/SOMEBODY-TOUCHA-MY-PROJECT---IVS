all: 
	cd profiling && gcc -c odchylka.c -lm
	cd profiling && gcc -o odchylka odchylka.o -lm
clean:
	cd profiling && rm odchylka.o && rm odchylka
