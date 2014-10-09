/**
	* \file tadFichier.c
	* \brief Contient les fonctions et procédures permettant de compléter le dictionnaire et en extraire les mots
	* \author Groupe 8
	* \version 1.0
	* \date décembre 2013
	*
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadDictionnaire.h"
#include "mot.h"
#include "tadFichier.h"


/**
	* \fn void completerDico(FILE* nom_dictionnaire, FILE* liste_mot,Dictionnaire *dico)
	* \brief Procédure permettant de compléter le dictionnaire en incluant la sérialisation

*/

void completerDico(FILE* nom_dictionnaire, FILE* liste_mot,Dictionnaire *dico)
{
deserialisation(dico,nom_dictionnaire);
completerDictionnaire(dico, liste_mot);
serialisation(dico,nom_dictionnaire);
}

/**
	* \fn void completerDictionnaire(Dictionnaire *dico, FILE* fichier)
	* \brief Permet d'ajouter un mot au dictionnaire


*/

void completerDictionnaire(Dictionnaire *dico, FILE* fichier)
{
 mot word;
 char car;
car = fgetc(fichier);
 while (car != EOF) 
 {
 	word = mot_ligne(&fichier,&car);
	ajouterMot(dico, word);
 
 	if (car != EOF)
 	{
 		car = fgetc(fichier);
 	}
 }
}

/**
	* \fn mot mot_ligne(FILE **fichier,char *car)
	* \brief Permet d'extraire un mot du dictionnaire

*/

mot mot_ligne(FILE **fichier,char *car)
{
 mot word;
 int i;
 char* contenu;
 i = 0;
 contenu = (char*)calloc(i + 1,sizeof(char));

 while ((*car != '\n') && (*car != EOF))
 {
 	i = i + 1;
 	contenu = realloc(contenu, (i + 1) * sizeof(char));
	contenu[i] = '\0';
 	contenu[i-1] = *car;
 	*car = fgetc(*fichier);
 
 }

 word.taille = strlen(contenu);
 word.contenu = contenu;
 
 return word;
}

