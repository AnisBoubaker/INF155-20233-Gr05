//
// Created by Anis Boubaker on 2023-10-13.
//
//ifndef : If not defined


#ifndef MODULE_TABLEAUX__H
#define MODULE_TABLEAUX__H

/* DEPENDANCES DU MODULE */
#include <stdio.h>


/*
 * AFFICHER TABLEAU
 * Affdiche le contenu d'un tableu de réels
 * Parametres:
 * - tab: Le tableu à afficher
 * - taille: La taille effective du tableau
 * Retour: Aucun
 */
void afficher_tableau(const double tab[], int taille );

/*
 * MOYENNE TABLEAU
 * ....
 */
double moyenne_tableau(const double tableau[], int taille) ;

/*
 * METTRE A ZERO
 * ....
 */
void mettre_a_zero(double tableau[], int taille);

#endif