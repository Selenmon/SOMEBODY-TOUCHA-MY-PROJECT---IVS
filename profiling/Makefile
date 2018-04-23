all: odchylka.o
	gcc -g -o odchylka odchylka.o -lm
odchylka .o: odchylka.c
	gcc -g -c odchylka.c -lm
mem: odchylka
	valgrind --leak-check=full ./odchylka
prof: odchylka
	gcc -lm -pg ./odchylka.c -o odchylka
	./odchylka
	gprof odchylka gmon.out > report.txt
zprava: zprava.ps
	ps2pdf zprava.ps
zprava.ps: zprava.dvi
	dvips zprava.dvi
zprava.dvi: zprava.tex
	latex zprava.tex
clzprava:
	rm zprava.{aux,log,dvi,ps}
	
clprof:
	rm gmon.out && rm report.txt && rm odchylka && rm odchylka.o
clean:
	rm odchylka.o && rm odchylka
