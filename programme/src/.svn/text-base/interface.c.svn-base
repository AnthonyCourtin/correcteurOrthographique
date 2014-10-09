/**
	* \file interface.c
	* \brief Regroupe les procédures permettant de gérer l'interface.
	* \author Groupe 8
	* \version 2.0
	* \date décembre 2013
	*
	* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"

/**
	* \fn void recupererEntreeStandard() 
	* \brief Récupérer la phrase saisie par l'utilisateur
	* 
	* Permet de récupérer l'entrée standard stdin afin de la tester et proposer d'éventuelles correction


*/
void recupererEntreeStandard()  
{
	FILE* entreeStandard = stdin;
	FILE* fichierTmp = NULL;
	
	char temp;

	if(entreeStandard != NULL)
	{
		fichierTmp = fopen("fichiers/fichierTmp.txt", "w");

		while(temp != EOF)
		{
			temp = fgetc(entreeStandard);
			fputc(temp, fichierTmp);
		}
		fclose(entreeStandard);
	}
	else
	{
		printf("Erreur.\n");
	}
	
	rewind(fichierTmp);
	fclose(fichierTmp);
	
}

/**
	* \fn aide()
	* \brief Affiche l'aide relative au fonctionnement du programme.
	*
	* Affiche les différentes option d'utilisation du programme

*/
void aide()
{
	printf("Aide de Dicotonik : \n");
	printf("\tdicotonik -h : cette aide\n");
	printf("\tdicotonik -d dico : correction de l'entrée standard à l'aide du dictionnaire dico\n");
	printf("\tdicotonik -d dico -f fic : compléter le dictionnaire dico à l'aide des mots du fichier texte fic (un mot par ligne)\n");
}
