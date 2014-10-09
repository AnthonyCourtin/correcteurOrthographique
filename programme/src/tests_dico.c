#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tadDictionnaire.h"
#include "mot.h"
#include "tests_unit.h"
/*

void test_dictionnaire(void)
{
 int i;
 Dictionnaire dico_test;
 dico_test = dictionnaire(); 
 for(i=0;i<MAX;i++)
 {
 	if (sizeof(dico_test.AdRFils[i].valeur) != sizeof(char))
		printf("erreur");
	else
		printf("%c",dico_test.AdRFils[i].valeur);

	if (dico_test.AdRFils[i].pointeur != NULL)
		printf("erreur");
	else
		printf("%i : pointe sur NULL",i);
	

 }

}

void test_obtenirFils(void)
{
 DonneesAdRFils l[MAX];
 int i;
 Dictionnaire dico_test;
 
 dico_test = dictionnaire();
 obtenirFils(dico_test, &l);
 
 for(i=0;i<MAX;i++)
 {
 	printf("%c",l[i].valeur);
 }

}

void test_modifierPointeur(void)
{
 Dictionnaire dico_test;
 Dictionnaire nouveauFilsTest;
 int i=14;
 dico_test = dictionnaire();
 nouveauFilsTest = dictionnaire();

 modifierPointeur(&dico_test,i,&nouveauFilsTest);
 
 if(obtenirPointeurDico(dico_test,i) == NULL)
 {
 	printf("erreur : pointeur non modifié");
 }
 else
 {
 	printf("pointeur modifié");
 }
 
}

void test_decaler(void)
{
mot word, newWord; 
int l1;

l1 = strlen("lapin");
printf("%i",l1);

word.taille = l1; 
word.contenu = (char *)malloc((l1+1)*sizeof(char));
word.contenu = "lapin";

decaler(&word,&newWord);
printf("%s \n",newWord.contenu);

}
*/
void test_ajouterMot(Dictionnaire *dico)
{
 mot word1, word2, word3;

 word1.taille = strlen("lapin");
 word2.taille = strlen("chaton");
 word3.taille = strlen("zelda");
 word1.contenu = calloc(word1.taille+1,sizeof(char));
 word2.contenu = calloc(word2.taille+1,sizeof(char));
 word3.contenu = calloc(word3.taille+1,sizeof(char));
 word1.contenu = "lapin";
 word2.contenu = "chaton";
 word3.contenu = "zelda";
 
 ajouterMot(dico,word1);
 ajouterMot(dico,word2);
 ajouterMot(dico,word3);
}

void test_afficher_dico(Dictionnaire *dico)
{
 Dictionnaire **pointeur1;
 Dictionnaire *curseur;
 
 pointeur1 = &(dico->AdRFils[0].pointeur);/*AdRFils[0].pointeur = p1 */
 dico->AdRFils[0].finDeMot = 1;
 ajouterDictionnaire(pointeur1);

 pointeur1 = &(dico->AdRFils[13].pointeur);/*AdRFils[0].pointeur = p1 */
 dico->AdRFils[13].finDeMot = 1;
 ajouterDictionnaire(pointeur1);

 curseur = dico;

 curseur = curseur->AdRFils[0].pointeur;
 ajouterDictionnaire(&(curseur->AdRFils[0].pointeur));


 curseur = curseur->AdRFils[0].pointeur;
 curseur->AdRFils[1].finDeMot = 1;


 printf("Adresse du pointeur : %p\n",(void *)curseur);
 printf("Valeur : %c\n",curseur->AdRFils[0].valeur);

}
