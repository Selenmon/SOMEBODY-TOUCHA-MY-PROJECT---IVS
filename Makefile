all: 
	cd profiling && gcc -c odchylka.c -lm
	cd profiling && gcc -o odchylka odchylka.o -lm

help:
	$(info ***** HELP *****)
	$(info Pro spuštění kalkulačky je nutno ji nejříve nainstalovat na Windows a poté spusit přes .exe soubor.)
	$(info Popis instalace je popsán v uživatelské příručce.)
	$(info Spuštění na linuxu není podporováno, program vyžaduje specifické návaznosti z Visual Studia!)

pack:
	rm -r ./xspisa01_xgajdo18_xmikul65_xpolas38/
	
	mkdir xspisa01_xgajdo18_xmikul65_xpolas38
	cd xspisa01_xgajdo18_xmikul65_xpolas38 && mkdir repo && mkdir install
	cp ./install/Setup.msi ./xspisa01_xgajdo18_xmikul65_xpolas38/install/
	cp ./debugging.png ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./dokumentace/ ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./dokumentace.pdf ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./GTK-IVS.glade ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./hodnoceni.txt ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./install/ ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./LICENSE.txt ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./Makefile ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./MathLib.h ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./mockup ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./profiling ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./Project1 ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./README.md ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./screenshot.png ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./skutecnost.txt ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./.editorconfig ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp -r ./.git ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./.gitattributes ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	cp ./.gitignore ./xspisa01_xgajdo18_xmikul65_xpolas38/repo/
	
	zip -r xspisa01_xgajdo18_xmikul65_xpolas38.zip ./xspisa01_xgajdo18_xmikul65_xpolas38/

	rm -r ./xspisa01_xgajdo18_xmikul65_xpolas38/
clean:
	cd profiling && rm odchylka.o && rm odchylka
