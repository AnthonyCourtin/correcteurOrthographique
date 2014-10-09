/**
	* \file correcteur.c
	* \brief Permet de corriger la phrase saisie par l'utilisateur
	* \author Groupe 8
	* \version 1.0
	* \date décembre 2012
	* 
	* Contient les fonctions permettant de gérer les test et correction apportées à la phrase soumise par l'utilisateur
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "correcteur.h"

/**
	* \fn analyserPhrase(char chaine[], mot ensemble[30])
	* \brief Analyse la phrase saisie
	*
	* Permet de décomposer la phrase à corriger en ses différents mots  


*/

void analyserPhrase(char chaine[], mot ensemble[30]){
	int pos=0;
	int i=0;
	char res[30];
	mot tmp;
	
	while(pos<strlen(chaine)){
		memset (res, 0, sizeof (res));
		decompoMot(chaine,&pos,res);
		if (res[0] != '\0'){
			initMot(&tmp, res);
			copierMot(&(ensemble[i]),&tmp);
			i=i+1;
		}
	}
}

/**
	* \fn corrigerEntree(FILE* fichier_dictionnaire,Dictionnaire* dico, char* phrase)
	* \brief Corrige la phrase soumise si besoin est 
	*
	* 


	
*/

void corrigerEntree(FILE* fichier_dictionnaire,Dictionnaire* dico, char* phrase){
	int i, j;
	mot ensemble[30];

	for (i=0; i<30; i++)
		ensemble[i].contenu = NULL;
		analyserPhrase(phrase, ensemble);
 			for (j=0; j<30; j++){
 				if(ensemble[j].contenu != NULL){
 					correctionMot(fichier_dictionnaire,dico, ensemble[j]);
 				}
 			}

} 

/**
	* \fn correctionMot(FILE* fichier_dictionnaire, Dictionnaire* dico,mot word)
	* \brief Permet de corriger un mot
	* Si le mot est mal orthographié, on le transforme et on propose les différentes variantes susceptibles d'être solution


*/

void correctionMot(FILE* fichier_dictionnaire, Dictionnaire* dico,mot word){
	listeCM liste_variante = NULL;

	if (estPresent(dico, word)){
 		printf("* %s \n", word.contenu);
 	}
 	else{
		liste_variante = transformation(word, dico);
 		printf("& %s : ", word.contenu);
 		if (liste_variante != NULL){
  			while(liste_variante != NULL){
 			printf("%s ",liste_variante->word.contenu);
 			liste_variante = liste_variante->next;
  			}
		}
		else{
			printf(" Aucune correction");
		}
 		printf("\n");
	}
}

/**
	* \fn decompoMot(char chaine[] ,int *pos, char res[])
	* \brief Extrait les mots de la phrase sans les séparateurs


*/

void decompoMot(char chaine[] ,int *pos, char res[]){
	int i=*pos;
	int j=0;
	
	while((estUnSeparateur(chaine[i])==0) && (i<strlen(chaine))){
		res[j]=chaine[i];
		i=i+1;
		j=j+1;
	}
	*pos=i+1;
}

/**
	* \fn estUnSeparateur(char c)
	* \brief Permet de savoir si un caractère est un séparateur
	* 
	* Parcourt la phrase et compare le caractère courant avec une liste contenant les différents séparateurs possibles


*/

int estUnSeparateur(char c){
	int res=0;
	int caractereActuel=0;
	FILE* fichier = NULL;

    fichier = fopen("separateur.txt", "r");
    if (fichier==NULL){
    	printf("erreur d'ouverture \n");
    }
    else{
 		while ((caractereActuel != EOF) && (res !=1)){
 			caractereActuel=(char)fgetc(fichier);
			if (caractereActuel==c){
				res=1;
		}
	}
    }
   fclose(fichier);
   return(res);
}
