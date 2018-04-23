all: dokumentace.ps
	ps2pdf dokumentace.ps
dokumentace.ps: dokumentace.dvi
	dvips dokumentace.dvi
dokumentace.dvi: dokumentace.tex
	latex dokumentace.tex
	latex dokumentace.tex
clean:
	rm dokumentace.{aux,log,dvi,ps,out}
