/**
* \file transformations.c
* \brief Programmation des fonctions relatives aux transformations
* \author Groupe 8
* \version 6.3
* \date 06/01/2013
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mot.h"
#include "tadDictionnaire.h"
#define nbCaracteres 26


/**
* \fn void ajouterAccentMot(listeCM liste, int pos, mot word, Dictionnaire* dico)
* \brief Permet d'ajouter une lettre accentuée dans un mot à une position donnée, le mot est ajouté dans la liste si il est présent dans le dictionnaire
*
* \return listeCM
*/
listeCM ajouterAccentMot(listeCM liste,int pos,mot word,Dictionnaire* dico){
    char *debut,*fin,*total;
    int i,j;
    mot wordTemp;
    debut=calloc(pos,1);
    fin=calloc(obtenirLongueur(&word)-pos,1);
    total=calloc(obtenirLongueur(&word),1);
    for (i=0;i<pos;i++)
    {
        debut[i]=word.contenu[i];
    }
    for (j=pos;j<obtenirLongueur(&word);j++)
    {
        fin[j-pos-1]=word.contenu[j];
    }
    strcpy(total,debut);
    strcat(total,"é");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"à");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"è");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ç");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"â");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"û");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ë");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"½");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"î");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ï");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ô");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ù");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"ö");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }

    strcpy(total,debut);
    strcat(total,"-");
    strcat(total,fin);
    initMot(&wordTemp,total);
    if (estPresent(dico,wordTemp)==1)
    {
        liste=ajouterListe(wordTemp,liste);
    }
    return liste;
}

/**
* \fn listeCM remplacementLettre(mot word, Dictionnaire* dico)
* \brief Remplace toutes les lettres du mot par les lettres de l'alphabet, le nouveau mot est ajouté à la liste si il est présent dans le dictionnaire
*
* \return listeCM
*/
listeCM remplacementLettre(mot word, Dictionnaire* dico){
    int i,j;
    char lettre;
    mot temp;
    listeCM liste = NULL;

    for (i=0;i<obtenirLongueur(&word);i++){
        lettre='a';
        for (j=0;j<nbCaracteres;j++){
            copierMot(&temp,&word);
            changerChar(&temp,i,lettre);
            if (estPresent(dico,temp)==1)
            {
                liste=ajouterListe(temp,liste);
            }
            lettre=lettre+1;
        }

        liste=ajouterAccentMot(liste,i,word,dico);
    }
    return liste;
}

/**
* \fn listeCM inversionLettre(mot word, Dictionnaire* dico
* \brief Inverse toutes les lettres du mot deux à deux, le nouveau mot est rajouté à la liste si il est présent dans le dictionnaire
*
* \return listeCM
*/
listeCM inversionLettre(mot word, Dictionnaire* dico){ 
    int i;
    char lettre1,lettre2;
    mot wordTemp;
    listeCM liste = NULL;

    for (i=0;i<obtenirLongueur(&word);i++){
        if ((obtenirChar(&word,i)) != (obtenirChar(&word,i+1))){
            copierMot(&wordTemp,&word);
            lettre1=obtenirChar(&wordTemp,i);
            lettre2=obtenirChar(&wordTemp,i+1);
            changerChar(&wordTemp,i,lettre2);
            changerChar(&wordTemp,i+1,lettre1);
            if (estPresent(dico,wordTemp)==1)
            {
                liste=ajouterListe(wordTemp,liste);
            }
        }
    }
    return liste;
}

/**
* \fn listeCM suppresionLettre(mot word, Dictionnaire* dico)
* \brief Supprime une lettre du mot, il est rajouté à la liste si il est présent dans le dictionnaire
*
* \return listeCM
*/
listeCM suppressionLettre(mot word, Dictionnaire* dico){
    int i,j;
    mot wordTemp,wordTemp2;
    listeCM liste = NULL;

    for (i=0;i<obtenirLongueur(&word);i++){
        copierMot(&wordTemp,&word);
        for(j=i+1;j<obtenirLongueur(&word);j++){
            changerChar(&wordTemp,j-1,obtenirChar(&wordTemp,j));
        }
        wordTemp.taille=obtenirLongueur(&wordTemp)-1;
        copierMot(&wordTemp2,&wordTemp);
        if (estPresent(dico,wordTemp2)==1)
        {
            liste=ajouterListe(wordTemp2,liste);
        }
    }
    return liste;
}

/**
* \fn listeCM insertionLettre(mot word, Dictionnaire* dico)
* \brief Ajoute une lettre de l'alphabet à toutes les positions du mot, le mot est rajouté à la liste si il est présent dans le dictionnaire
*
* \return listeCM
*/
listeCM insertionLettre(mot word, Dictionnaire* dico){ 
    int i,j,k;
    mot wordTemp,wordTemp2;
    listeCM liste = NULL;
    char lettre;

    copierMot(&wordTemp,&word);
    wordTemp.taille=obtenirLongueur(&wordTemp)+1;
    for(i=0;i<obtenirLongueur(&word);i++)
    {
        lettre='a';
        for (j=1;j<nbCaracteres;j++)
        {
            copierMot(&wordTemp2,&wordTemp);
            for (k=obtenirLongueur(&word);k>i;k--)
            {
                changerChar(&wordTemp2,k,obtenirChar(&wordTemp2,k-1));
            }
            changerChar(&wordTemp2,i,lettre);

            if (estPresent(dico,wordTemp2)==1)
            {
                liste=ajouterListe(wordTemp2,liste);
            }
            lettre=lettre+1;
        }
        liste=ajouterAccentMot(liste,i,wordTemp2,dico);
    }
    return liste;
}

/**
* \fn listeCM separationMot(mot word, Dictionnaire* dico)
* \brief Sépare un mot en deux mots disctincts, les nouveaux mots sont rajoutés à la liste si ils sont présent dans le dictionnaire
*
* \return listeCM
*/
listeCM separationMot(mot word,Dictionnaire* dico){
    int i,k;
    mot wordTemp,wordTemp2,wordTemp1;
    listeCM liste = NULL;

    for (i=0;i<obtenirLongueur(&word);i++)
    {
        copierMot(&wordTemp,&word);
        wordTemp.taille=i+1;
        copierMot(&wordTemp1,&wordTemp);

        for (k=0;k<i;k++)
        {
            changerChar(&wordTemp1,k,obtenirChar(&word,k));
        }

        copierMot(&wordTemp,&word);
        wordTemp.taille=obtenirLongueur(&word)-i;
        copierMot(&wordTemp2,&wordTemp);

        for (k=i;k<obtenirLongueur(&word);k++)
        {
            changerChar(&wordTemp2,k-i,obtenirChar(&word,k));
        }
        if ((estPresent(dico,wordTemp2)==1)&&(estPresent(dico,wordTemp1)==1))
        {
            liste=ajouterListe(wordTemp1,liste);
            liste=ajouterListe(wordTemp2,liste);
        }
    }
    return liste;
}

/**
* \fn listeCM transformation(mot word, Dictionnaire* dico)
* \brief Fabrique une liste de mots possibles corrigés à partir d'un mot faux
*
* \return listeCM
*/
listeCM transformation(mot word,Dictionnaire* dico){
    return concatenerListe(remplacementLettre(word,dico),concatenerListe(inversionLettre(word,dico),concatenerListe(suppressionLettre(word,dico),concatenerListe(separationMot(word,dico),insertionLettre(word,dico)))));
}
