#ifndef DEF_TAD_DICO
#define DEF_TAD_DICO
#include "mot.h"
#define MAX 73

/*
typedef enum{a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z,à,â,ä,æ,é,è,ê,ë,ì,î,ï,ò,ô,ö,½,ù,û,ü,ç,ñ,-} lettre;
*/

typedef struct DonneesAdRFils  DonneesAdRFils;
typedef struct Dictionnaire Dictionnaire;

struct DonneesAdRFils{
	char valeur;
	int finDeMot;
	Dictionnaire *pointeur;
};

struct Dictionnaire{ 
	DonneesAdRFils  AdRFils[MAX];
};

void ajouterMot(Dictionnaire *dico, mot word);
void dictionnaire(Dictionnaire* dico);
void ajouterDictionnaire(Dictionnaire** p);
int estPresent(Dictionnaire *dico, mot word);
void afficher_dictionnaire(Dictionnaire *dico, char* str);
void supprimerMot(Dictionnaire *dico, mot word);
void serialisation(Dictionnaire* dico,FILE* fichier_dictionnaire);
void serialisation_dico(Dictionnaire* dico, FILE** fichier_dictionnaire);
void deserialisation(Dictionnaire* dico,FILE* fichier_dictionnaire);
void deserialisation_dico(Dictionnaire* curseur, FILE** fichier_dictionnaire);

#endif
