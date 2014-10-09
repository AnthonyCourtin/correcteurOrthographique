#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mot.h"
#include "tadDictionnaire.h"
#include "tests_unit.h"
#include "tadFichier.h"

int main(int argc, char *argv[])
{
 FILE* fichier_dictionnaire;
 Dictionnaire dico;
 clock_t tic,toc;
 double time;

 dictionnaire(&dico);
/* test_ajouterMot(&dico); */
 tic = clock();
 deserialisation(&dico);
 toc = clock();
 time = (double)(toc-tic)/CLOCKS_PER_SEC;

 /* fichier_dictionnaire = fopen("dico-ref-ascii.txt","r"); 
 completerDictionnaire(&dico, fichier_dictionnaire);
 serialisation(&dico); 
 fclose(fichier_dictionnaire);
*/
 afficher_dictionnaire(&dico,"\0");
 printf("\n temps :  %f \n",time);
 return 0;
}
