#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"
#include "tadDictionnaire.h"
#include "tadFichier.h"
#include "mot.h"
#include "correcteur.h"

int main(int nbArguments, char** arguments)
{
	FILE* dico = NULL;
	FILE* fichier = NULL;
	FILE* fichierTmpSauveur = NULL;
 	Dictionnaire arbre_dico;
	int compteur = 0, compteurPhrase = 0;
	char caractereCompteur;
	char *phrase = NULL;
 	dictionnaire(&arbre_dico);

		
	/* Dans le cas où on veut corriger une phrase */
	if((nbArguments == 3) && (strcmp(arguments[1], "-d") == 0))
	{
		printf("c \n");
		recupererEntreeStandard();

		fichierTmpSauveur = fopen("fichiers/fichierTmp.txt", "r");

		if(fichierTmpSauveur != NULL)
		{
			while(caractereCompteur != EOF)
			{
				caractereCompteur = fgetc(fichierTmpSauveur);
				compteur++;
			}

			/* On alloue dynamiquement notre chaîne de caractères qui 
			 * possède la même taille que la phrase entrée en entrée standard. */
			phrase = malloc((compteur-1)*sizeof(char)); 
														
			rewind(fichierTmpSauveur);

			/* Gestion du caractere de fin de fichier : 
			 * on va prendre tout sauf le caractère de fin de chaine. */
			fgets(phrase, compteur-1, fichierTmpSauveur); 
														  
														  
			fclose(fichierTmpSauveur);
		}
		else
		{
			printf("Erreur d'ouverture du fichier.\n");
		}

		/* Debug
		printf("%s\n", phrase );	
		compteurPhrase = strlen(phrase);
		printf("Taille de la phrase: %d \n", compteurPhrase);
		*/
		
		
		if(phrase[0] != '\0')
		{
printf("c \n");
			dico = fopen(arguments[2], "r");
			if(dico != NULL)
			{
 				
				deserialisation(&arbre_dico,dico);
				printf("b \n");
 				corrigerEntree(dico,&arbre_dico, phrase);
				fclose(dico);
			}
			else
			{
				printf("Ce dictionnaire n'existe pas.\n");
			}
		} 
	} 
	else
	{
		/* Dans le cas où on veut compléter le dico */
		if((nbArguments == 5) && (strcmp(arguments[1], "-d") == 0) && (strcmp(arguments[3], "-f")) == 0)
		{
			dico = fopen(arguments[2], "w");
			fichier = fopen(arguments[4], "r");
			
			if((dico != NULL) && (fichier != NULL))
			{
				completerDico(dico, fichier, &arbre_dico);
				fclose(dico);
				fclose(fichier);
			}
			else
			{
				printf("Le fichier et/ou le dictionnaire n'existe(nt) pas.\n");
			}
		}
		else
		{
			aide();
		}
	}

	return 0;
}
