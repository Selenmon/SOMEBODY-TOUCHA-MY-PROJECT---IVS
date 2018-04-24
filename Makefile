all: 
	cd profiling && gcc -c odchylka.c -lm
	cd profiling && gcc -o odchylka odchylka.o -lm

help:
	$(info ***** HELP *****)
	$(info Pro spuštění kalkulačky je nutno ji nejříve nainstalovat na Windows a poté spusit přes .exe soubor.)
	$(info Popis instalace je popsán v uživatelské příručce.)
	$(info Spuštění na linuxu není podporováno, program vyžaduje specifické návaznosti z Visual Studia!)
clean:
	cd profiling && rm odchylka.o && rm odchylka
