#ifndef __TRANSFORMATIONS__
#define __TRANSFORMATIONS__

listeCM remplacementLettre(mot word, Dictionnaire* dico);
listeCM inversionLettre(mot word, Dictionnaire* dico);
listeCM suppressionLettre(mot word, Dictionnaire* dico);
listeCM ajouterListe(mot word, listeCM liste);
listeCM transformation(mot word,Dictionnaire* dico);

#endif
