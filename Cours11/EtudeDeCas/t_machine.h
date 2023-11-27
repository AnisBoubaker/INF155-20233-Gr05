//
// Created by Anis Boubaker on 2023-11-20.
//

#ifndef ETUDEDECAS_T_MACHINE_H
#define ETUDEDECAS_T_MACHINE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "t_date.h"

typedef enum categories{
    CAT1, CAT2, CAT3, CAT4, CAT5
} e_categorie;


typedef struct machine {
    int num;
    char* num_modele;
    //char num_modele[50];
    t_date date_mise_service;
    t_date date_maintenance;
    e_categorie categorie;
} t_machine;

/*
Alloue et initialise une nouvelle machine. Le numéro de la machine et
le numéro de modèle reçus en paramètres permettent d'initialiser les champs
num et num_modele.
ENTREES:
num (entier): numéro de la machine dans le parc
num_modele (chaine): le numéro de modèle de la nouvelle machine
SORTIE:
Une référence vers la nouvelle machine allouée avec les champs num et num_modele initialisés.
 Les dates de mise en service et de maintenance seront les dates nulles (0-0-0).
 En cas d'erreur d'allocation mémoire, la fonction retourne NULL.
*/
t_machine* machine_init(int num, const char* num_modele);

/*
Libère l'espace mémoire d'une machine.
ENTREES:
machine (référence vers une machine): la machine à libérer SORTIE:
Aucune.
*/
void machine_free(t_machine* machine);


/*
 *
 */
void machine_jeu_machines(t_machine* machines[], int taille_max);

/*
 *
 */
void machine_afficher(const t_machine* m);


/*
Identifie toutes les machines qui doivent subir une opération de maintenance.
Ces machines sont celles dont la date de dernière maintenance est nulle (0-0-0)
ou celles dont la date de dernière maintenance est antérieure à une date_min.
ENTREES:
- liste_machines: Tableau de références des machines du parc
- nb_machines: nombre de machines dans le tableau liste_machines
- date_min: Date minimale
SORTIE:
Tableau dynamique de références vers des machines qui doivent être maintenues.
*/
t_machine** machines_a_maintenir(t_machine* liste_machines[], int nb_machines, t_date date_min, int* nb_a_maintenir);


/*
 * Créer un tableau à 2 dimensions de t_machine* où chaque machine est classée dans la ligne
 * correspondant à sa catégorie.
 */
t_machine*** machine_classer_categories(t_machine* liste_machines[], int nb_machines);



#endif //ETUDEDECAS_T_MACHINE_H
