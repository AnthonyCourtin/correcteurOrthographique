SRCDIR=src
BINDIR=bin
LIBDIR=lib
TESTSDIR=tests
DOCDIR=doc
INCLUDEDIR=include
CC=gcc -Wall -pedantic
AR=ar
CFLAGS=-I$(INCLUDEDIR)
LDFLAGS=-L$(LIBDIR)
EXEC=asispell
EXEC2=TUcorriger
EXEC3=TUmot
RAPPORT=../rapport

all : $(BINDIR)/$(EXEC) $(BINDIR)/$(EXEC2) $(BINDIR)/$(EXEC3) fairerapport creerDoc

%.o : %.c
	$(CC) -o $@ -c $(CFLAGS) $^
	
$(BINDIR)/$(EXEC) : $(SRCDIR)/dictionnaire.o $(SRCDIR)/dependances_dictionnaire.o $(SRCDIR)/mot.o $(SRCDIR)/correcteur.o $(SRCDIR)/tadFichier.o $(SRCDIR)/transformations.o $(SRCDIR)/interface.o $(SRCDIR)/main.o
	$(CC) -o $@  $(SRCDIR)/dictionnaire.o $(SRCDIR)/dependances_dictionnaire.o $(SRCDIR)/mot.o $(SRCDIR)/correcteur.o $(SRCDIR)/tadFichier.o $(SRCDIR)/transformations.o $(SRCDIR)/interface.o $(SRCDIR)/main.o 

$(BINDIR)/$(EXEC2) : $(SRCDIR)/TUcorrecteur.o $(SRCDIR)/dictionnaire.o $(SRCDIR)/mot.o $(SRCDIR)/correcteur.o $(SRCDIR)/transformations.o $(SRCDIR)/dependances_dictionnaire.o
	$(CC) -o $@  $(SRCDIR)/TUcorrecteur.o $(SRCDIR)/dictionnaire.o $(SRCDIR)/mot.o $(SRCDIR)/correcteur.o $(SRCDIR)/transformations.o $(SRCDIR)/dependances_dictionnaire.o -lcunit

$(BINDIR)/$(EXEC3) : $(SRCDIR)/motTU.o $(SRCDIR)/mot.o
	$(CC) -o $@ $(SRCDIR)/motTU.o $(SRCDIR)/mot.o -lcunit

fairerapport : $(RAPPORT)
	cd $(RAPPORT) && pdflatex -interaction=batchmode Rapport.tex
	cd $(RAPPORT) && pdflatex -interaction=batchmode Rapport.tex

creerDoc : $(DOCDIR)
	cd $(DOCDIR) && doxygen doc_programme

clean : 
	rm -f $(BINDIR)/asispell
	rm -f $(SRCDIR)/*.o
	rm -f $(TESTSDIR)/*.o
	rm -f $(BINDIR)/TUcorriger
	rm -f $(BINDIR)/TUmot
	rm -f cd ../rapport/*.out
	rm -f cd ../rapport/*.toc
	rm -f cd ../rapport/*.log
	rm -f cd ../rapport/*.aux
	rm -f cd ../rapport/Rapport.pdf
	rm -f -r doc/html/
	rm -f -r doc/latex/
