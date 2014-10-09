#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadDictionnaire.h"
#include "mot.h"
#include "tadFichier.h"

void test_completer_dictionnaire(Dictionnaire *dico)
{
 FILE* fichier;

 fichier = fopen("liste_test","r");
 completerDictionnaire(dico,fichier);
 fclose(fichier);

}
