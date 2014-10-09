#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadDictionnaire.h"
#include "tadDependancesDictionnaire.h"
#include "mot.h"
#include "tests_unit.h"


void ajouterMot(Dictionnaire *dico, mot word)
{
 int i,position;
 Dictionnaire* curseur;
 char car;
 curseur = dico;
 position = 0;

for (i=0; i<word.taille-1;i++)
 {
 	car = obtenirChar(&word,i);
 	obtenirPositionCaractereTableau(*dico,car,&position);

 	if(curseur->AdRFils[position].pointeur == NULL)
 	{
 		ajouterDictionnaire(&(curseur->AdRFils[position].pointeur));
 	}
	curseur = curseur->AdRFils[position].pointeur;
 }
 
 car = obtenirChar(&word,i);
 obtenirPositionCaractereTableau(*dico,car,&position);
 curseur->AdRFils[position].finDeMot = 1;
}

void ajouterDictionnaire(Dictionnaire** p)
{
 int i,j;
 char car;
 FILE* fichier_caractere = NULL;
 Dictionnaire* pFils = NULL;

 i=0;
 pFils = (Dictionnaire*)malloc(sizeof(Dictionnaire));
 fichier_caractere = fopen("liste_caractere","r");
 

 if (fichier_caractere != NULL) 
 {
 	if(pFils != NULL)
 	{
 		fseek(fichier_caractere,0,SEEK_SET);
		car = fgetc(fichier_caractere);
 		for(j = 0; j < MAX ; j++)
 		{
 			pFils->AdRFils[j].pointeur = NULL;
 		}

		while (car != EOF)
 		{
    			pFils->AdRFils[i].valeur = car;
    			pFils->AdRFils[i].finDeMot = 0;
			car = fgetc(fichier_caractere);
 			i++; 
 		}

		*p = pFils;
 	}
	fclose(fichier_caractere);
 }

}

int estPresent(Dictionnaire *dico, mot word)
{
 int i, position, present;
 Dictionnaire* curseur;
 char car;
 i = 0;
 position = 0;
 present = 1;
 curseur = dico;
 while ((i<word.taille-1) && (present == 1))
 {
  	car = obtenirChar(&word,i);
 	obtenirPositionCaractereTableau(*dico,car,&position);
 	if(curseur->AdRFils[position].pointeur == NULL)
	{
 		present = 0;
 	}
 	else
	{
 		curseur = curseur->AdRFils[position].pointeur;
	}
 	i++;
 }

 car = obtenirChar(&word,i);
 obtenirPositionCaractereTableau(*dico,car,&position);

 if ((i = word.taille) && (curseur->AdRFils[position].finDeMot == 0))
 {
 	present = 0;
 }

 return present;
}

void afficher_dictionnaire(Dictionnaire *dico, char* str)
{
 int i,longueur, valeur_dico;
 Dictionnaire* pointeur_dico;
 char car;
 char* str_fille;

 for (i=0; i<MAX; i++)
 {
	car = obtenirElementDico(*dico,i);
 	valeur_dico = dico->AdRFils[i].finDeMot;
	pointeur_dico =  dico->AdRFils[i].pointeur; 
 	
 	if (valeur_dico == 1)
 	{
 		printf("%s%c\n",str,car);
 	}
 	
 	if (pointeur_dico != NULL)
 	{
 		longueur = strlen(str);
 		str_fille = (char*)calloc(longueur+2,sizeof(char));
		strcat(str_fille,str);
 		str_fille[longueur] = car;
 		str_fille[longueur+1] = '\0';
		afficher_dictionnaire(pointeur_dico,str_fille);
 		free(str_fille); 
 	}
 }

}

void dictionnaire(Dictionnaire* dico)
{
 int i,j;
 char car;
 FILE* liste_caractere = NULL;
 i = 0;
 liste_caractere = fopen("liste_caractere","r");

 if (liste_caractere != NULL)
 {
 	fseek(liste_caractere,0,SEEK_SET);
 	car = fgetc(liste_caractere);
 	for(j = 0; j < MAX ; j++)
 	{
 		dico->AdRFils[j].pointeur = NULL;
 	}
 	
 	while(car != EOF)
 	{
 		dico->AdRFils[i].valeur = car;
 		dico->AdRFils[i].finDeMot = 0;
		car = fgetc(liste_caractere);
 		i++;
 	}
	fclose(liste_caractere);
 
 }
}

void supprimerMot(Dictionnaire *dico, mot word)
{
}

void serialisation(Dictionnaire* dico)
{
FILE* fichier_dictionnaire = NULL;
fichier_dictionnaire = fopen("francais.dico","w+");
 if(fichier_dictionnaire != NULL)
 {
 	serialisation_dico(dico,&fichier_dictionnaire);
	fclose(fichier_dictionnaire);
 }
}

/*
void serialisation_dico(Dictionnaire* dico,FILE** fichier_dictionnaire)
{
 int i, present_dico;
 Dictionnaire *curseur, *pointeur_dico;
 char car_dico, car_present, car_pointeur; 

 curseur = dico;

 	for (i=0; i<MAX; i++)
 	{
 		car_dico = curseur->AdRFils[i].valeur;
 		present_dico = curseur->AdRFils[i].finDeMot;
 		pointeur_dico = curseur->AdRFils[i].pointeur;

		if (present_dico == 1)
 			car_present = '1';
		else
 			car_present = '0';

 		if (pointeur_dico != NULL)
			car_pointeur = '(';
 		else
			car_pointeur = '.';
		
 		fputc(car_dico,*fichier_dictionnaire);
 		fputc(car_present,*fichier_dictionnaire);
 		fputc(car_pointeur,*fichier_dictionnaire);

 		if (pointeur_dico != NULL)
 		{
			serialisation_dico(pointeur_dico, fichier_dictionnaire);
 			fputc(')',*fichier_dictionnaire); 
 		}

 	}
}*/

void serialisation_dico(Dictionnaire* dico,FILE** fichier_dictionnaire)
{
 int i, present_dico;
 Dictionnaire *curseur, *pointeur_dico;
 char car_present, car_pointeur; 
 char position_car[3];
 curseur = dico;

 	for (i=0; i<MAX; i++)
 	{
 		encodage_car(*dico,curseur->AdRFils[i].valeur,position_car);
 		present_dico = curseur->AdRFils[i].finDeMot;
 		pointeur_dico = curseur->AdRFils[i].pointeur;

		if (present_dico == 1)
 			car_present = '1';
		else
 			car_present = '0';

 		if (pointeur_dico != NULL)
		{
 		car_pointeur = '(';
 		fputs(position_car,*fichier_dictionnaire);
 		fputc(car_present,*fichier_dictionnaire);
 		fputc(car_pointeur,*fichier_dictionnaire);
		serialisation_dico(pointeur_dico,fichier_dictionnaire);
 		fputc(')',*fichier_dictionnaire); 
		}
 		else if((pointeur_dico == NULL)&&(car_present == '1'))
 		{
 		car_pointeur = '.';
 		fputs(position_car,*fichier_dictionnaire);
 		fputc(car_present,*fichier_dictionnaire);
 		fputc(car_pointeur,*fichier_dictionnaire);
 		}
 	}
}

void deserialisation(Dictionnaire* dico)
{
 FILE* fichier_dictionnaire = NULL;
 fichier_dictionnaire = fopen("francais.dico","r");
 if (fichier_dictionnaire != NULL)
 {
 	deserialisation_dico(dico,&fichier_dictionnaire);
 	fclose(fichier_dictionnaire); 
 }
 else
 {
 	printf("erreur \n");
 }
}

int carEnInt(char car)
{
 if (car == '1')
 {
	return 1;
 }
else
 {
	return 0;
 }
}

/*
void deserialisation_dico(Dictionnaire* curseur, FILE** fichier_dictionnaire)
{
 char car;
 int position;
 Dictionnaire *pointeur;
 Dictionnaire **adresse_pointeur;
 car = fgetc(*fichier_dictionnaire);

 while ((car != EOF) && (car != ')'))
 {
 	obtenirPositionCaractereTableau(*curseur,car,&position);
 	car = fgetc(*fichier_dictionnaire); 
 	curseur->AdRFils[position].finDeMot = carEnInt(car);
 	car = fgetc(*fichier_dictionnaire);
	if (car == '(')
 	{
 		adresse_pointeur = &(curseur->AdRFils[position].pointeur);
 		ajouterDictionnaire(adresse_pointeur);
 		pointeur = curseur->AdRFils[position].pointeur;
 		deserialisation_dico(pointeur,fichier_dictionnaire);
	}
 	else
 	{
	curseur->AdRFils[position].pointeur = NULL;
	}
 	car = fgetc(*fichier_dictionnaire);
 }

}
*/

void deserialisation_dico(Dictionnaire* curseur, FILE** fichier_dictionnaire)
{
 char car;
 char position_car[2];
 int position;
 Dictionnaire *pointeur;
 Dictionnaire **adresse_pointeur;
 car = fgetc(*fichier_dictionnaire);
 while ((car != EOF) && (car != ')'))
 {
 	fseek(*fichier_dictionnaire,-1,SEEK_CUR);
 	fgets(position_car,3,*fichier_dictionnaire);
 	position = atoi(position_car);
 	car = fgetc(*fichier_dictionnaire); 
 	curseur->AdRFils[position].finDeMot = carEnInt(car);
 	car = fgetc(*fichier_dictionnaire);

	if (car == '(')
 	{
 		adresse_pointeur = &(curseur->AdRFils[position].pointeur);
 		ajouterDictionnaire(adresse_pointeur);
 		pointeur = curseur->AdRFils[position].pointeur;
 		deserialisation_dico(pointeur,fichier_dictionnaire);
	}
 	else
 	{
	curseur->AdRFils[position].pointeur = NULL;
	}
 	car = fgetc(*fichier_dictionnaire);
 }

}
