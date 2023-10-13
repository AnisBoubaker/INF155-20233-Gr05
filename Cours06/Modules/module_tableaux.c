//
// Created by Anis Boubaker on 2023-10-13.
//

//Permettre la déclaration des prototypes
#include "module_tableaux.h"


//Afficher le contenu d'un tableau
//Le paramètre tab est un tableau, en raison de la présence des [] après son identifiant
//Toute fonction qui reçoit un tableau en paramètre, DOIT également recevoir un 2e paramètre
//qui constitue la taille EFFECTIVE du tableau
//const: la fonction n'a pas le droit de modifier le contenu du tableau reçu en paramètre
void afficher_tableau(const double tab[], int taille )
{
    for(int i=0; i<taille; i++ )
    {
        printf("Case num. %i: %lf\n", i+1, tab[i]);
    }
}

/*
 * Écrire une fonction qui calcule la moyenne des valeurs d'un tableau de double.
 * La fonction s'appellera moyenne_tableau
 */
double moyenne_tableau(const double tableau[], int taille)
{
    double somme = 0;
    for(int i=0; i<taille; i++)
    {
        somme += tableau[i];
    }
    return somme / taille;
}

void mettre_a_zero(double tableau[], int taille)
{
    for(int i=0; i<taille; i++)
    {
        tableau[i] = 0;
    }
}