#include <stdio.h>
#include <stdlib.h>
#include "tadDictionnaire.h"
#include "tadDependancesDictionnaire.h"
#include "mot.h"
#include "tests_unit.h"

void obtenirPositionCaractereTableau(Dictionnaire dico,char car, int *position)
{
 *position = 0;
 while(car != obtenirElementDico(dico,*position)) 
 {
  *position = *position + 1; 
 }
 }

/*
void encodage_car(Dictionnaire dico_base, char car, char* position_car)
{
int position;

position_car[0] = '0';
position_car[1] = '0';
position_car[2] = '\0';
obtenirPositionCaractereTableau(dico_base,car,&position);

if (position < 10)
{
 sprintf(position_car,"%i",position);
 position_car[1] = position_car[0];
 position_car[0] = '0';
}
else
{
 sprintf(position_car,"%i",position);
}
}
*/

void encodage_car(char car, char* position_car)
{
position_car[0] = '0';
position_car[1] = '0';
position_car[2] = '\0';


switch (car) {
 
	case 'a' :
		position_car[0] = '0';
 		position_car[1] = '0';
	break;	
 
	case 'b' :
	position_car[0] = '0';
	position_car[1] = '1';
	break;	
 
	case 'c' :
		position_car[0] = '0';
		position_car[1] = '2';
	break;	
 
	case 'd' :
		position_car[0] = '0';
		position_car[1] = '3';
	break;	
 
	case 'e' :
		position_car[0] = '0';
		position_car[1] = '4';
	break;	
 
	case 'f' :
		position_car[0] = '0';
		position_car[1] = '5';
	break;	
 
	case 'g' :
		position_car[0] = '0';
		position_car[1] = '6';
	break;	
 
	case 'h' :
		position_car[0] = '0';
		position_car[1] = '7';
	break;	
 
	case 'i' :
		position_car[0] = '0';
		position_car[1] = '8';
	break;	
 
	case 'j' :
		position_car[0] = '0';
		position_car[1] = '9';
	break;	
 
	case 'k' :
		position_car[0] = '1';
		position_car[1] = '0';
	break;	
 
	case 'l' :
		position_car[0] = '1';
		position_car[1] = '1';
	break;	
 
	case 'm' :
		position_car[0] = '1';
		position_car[1] = '2';
	break;	
 
	case 'n' :
		position_car[0] = '1';
		position_car[1] = '3';
	break;	
 
	case 'o' :
		position_car[0] = '1';
		position_car[1] = '4';
	break;	
 
	case 'p' :
		position_car[0] = '1';
		position_car[1] = '5';
	break;	
 
	case 'q' :
		position_car[0] = '1';
		position_car[1] = '6';
	break;	
 
	case 'r' :
		position_car[0] = '1';
		position_car[1] = '7';
	break;	
 
	case 's' :
		position_car[0] = '1';
		position_car[1] = '8';
	break;	
 
	case 't' :
		position_car[0] = '1';
		position_car[1] = '9';
	break;	
 
	case 'u' :
		position_car[0] = '2';
		position_car[1] = '0';
	break;	
 
	case 'v' :
		position_car[0] = '2';
		position_car[1] = '1';
	break;	
 
	case 'w' :
		position_car[0] = '2';
		position_car[1] = '2';
	break;	
 
	case 'x' :
		position_car[0] = '2';
		position_car[1] = '3';
	break;	
 
	case 'y' :
		position_car[0] = '2';
		position_car[1] = '4';
	break;	
 
	case 'z' :
		position_car[0] = '2';
		position_car[1] = '5';
	break;	
 
	case 'A' :
		position_car[0] = '2';
		position_car[1] = '6';
	break;	
 
	case 'B' :
		position_car[0] = '2';
		position_car[1] = '7';
	break;	
 
	case 'C' :
		position_car[0] = '2';
		position_car[1] = '8';
	break;	
 
	case 'D' :
		position_car[0] = '2';
		position_car[1] = '9';
	break;	
 
	case 'E' :
		position_car[0] = '3';
		position_car[1] = '0';
	break;	

	case 'F' :
		position_car[0] = '3';
		position_car[1] = '1';
	break;	
	case 'G' :
		position_car[0] = '3';
		position_car[1] = '2';
	break;	
	case 'H' :
		position_car[0] = '3';
		position_car[1] = '3';
	break;	
	case 'I' :
		position_car[0] = '3';
		position_car[1] = '4';
	break;	
	case 'J' :
		position_car[0] = '3';
		position_car[1] = '5';
	break;	
	case 'K' :
		position_car[0] = '3';
		position_car[1] = '6';
	break;	
	case 'L' :
		position_car[0] = '3';
		position_car[1] = '7';
	break;	
	case 'M' :
		position_car[0] = '3';
		position_car[1] = '8';
	break;	
	case 'N' :
		position_car[0] = '3';
		position_car[1] = '9';
	break;	
	case 'O' :
		position_car[0] = '4';
		position_car[1] = '0';
	case 'P' :
		position_car[0] = '4';
		position_car[1] = '1';
	break;	
	case 'Q' :
		position_car[0] = '4';
		position_car[1] = '2';
	break;	
	case 'R' :
		position_car[0] = '4';
		position_car[1] = '3';
	break;	
	case 'S' :
		position_car[0] = '4';
		position_car[1] = '4';
	break;	
	case 'T' :
		position_car[0] = '4';
		position_car[1] = '5';
	break;	
	case 'U' :
		position_car[0] = '4';
		position_car[1] = '6';
	break;	
	case 'V' :
		position_car[0] = '4';
		position_car[1] = '7';
	break;	
	case 'W' :
		position_car[0] = '4';
		position_car[1] = '8';
	break;	
	case 'X' :
		position_car[0] = '4';
		position_car[1] = '9';
	break;	
	case 'Y' :
		position_car[0] = '5';
		position_car[1] = '0';
	break;	
	case 'Z' :
		position_car[0] = '5';
		position_car[1] = '1';
	break;	
	case 'à' :
		position_car[0] = '5';
		position_car[1] = '2';
	break;	
	case 'â' :
		position_car[0] = '5';
		position_car[1] = '3';
	break;
	case 'ä' :
		position_car[0] = '5';
		position_car[1] = '4';
	break;
	case 'æ' :
		position_car[0] = '5';
		position_car[1] = '5';
	break;
	case 'é' :
		position_car[0] = '5';
		position_car[1] = '6';
	break;
	case 'è' :
		position_car[0] = '5';
		position_car[1] = '7';
	break;
	case 'ê' :
		position_car[0] = '5';
		position_car[1] = '8';
	break;
	case 'ë' :
		position_car[0] = '5';
		position_car[1] = '9';
	break;
	case 'ì' :
		position_car[0] = '6';
		position_car[1] = '0';
	break;
	case 'î' :
		position_car[0] = '6';
		position_car[1] = '1';
	break;
	case 'ï' :
		position_car[0] = '6';
		position_car[1] = '2';
	break;
	case 'ò' :
		position_car[0] = '6';
		position_car[1] = '3';
	break;
	case 'ô' :
		position_car[0] = '6';
		position_car[1] = '4';
	break;
	case 'ö' :
		position_car[0] = '6';
		position_car[1] = '2';
	break;
	case '½' :
		position_car[0] = '6';
		position_car[1] = '6';
	break;
	case 'ù' :
		position_car[0] = '6';
		position_car[1] = '7';
	break;
	case 'û' :
		position_car[0] = '6';
		position_car[1] = '8';
	break;
	case 'ü' :
		position_car[0] = '6';
		position_car[1] = '9';
	break;
	case 'ç' :
		position_car[0] = '7';
		position_car[1] = '0';
	break;
	case 'ñ' :
		position_car[0] = '7';
		position_car[1] = '1';
	break;
	case '-' :
		position_car[0] = '7';
		position_car[1] = '2';
	break;
}

/* printf("%s \n",position_car); */

}

void obtenirFils(Dictionnaire dico, DonneesAdRFils (*l)[MAX])
{
 int i;
 for(i=0; i<MAX; i++)
 {
 	(*l)[i] = dico.AdRFils[i];
 }
}


DonneesAdRFils obtenirElementListe(DonneesAdRFils (*l)[MAX],int i)
{
 return (*l)[i];
}


Dictionnaire* obtenirPointeurDico(Dictionnaire dico,int i)
{
 DonneesAdRFils AdRFils;
 AdRFils = dico.AdRFils[i];
 return obtenirPointeur(AdRFils);
}


Dictionnaire* obtenirPointeur(DonneesAdRFils AdRFils)
{
 return AdRFils.pointeur;
}


void modifierPointeur(Dictionnaire *dico, int j,Dictionnaire *adresseNouveauFils)
{
/* à revoir pour mettre la valeur null au pointeur, cf algo latex.*/
(*dico).AdRFils[j].pointeur = adresseNouveauFils;
}


char obtenirElementDico(Dictionnaire dico, int i)
{
 DonneesAdRFils AdRFils;
 AdRFils = dico.AdRFils[i];
 return obtenirElement(AdRFils); 
}


char obtenirElement(DonneesAdRFils AdRFils)
{
 return AdRFils.valeur;
}

