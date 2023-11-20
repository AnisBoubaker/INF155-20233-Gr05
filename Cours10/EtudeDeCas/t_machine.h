//
// Created by Anis Boubaker on 2023-11-20.
//

#ifndef ETUDEDECAS_T_MACHINE_H
#define ETUDEDECAS_T_MACHINE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "t_date.h"

typedef struct machine {
    int num;
    char* num_modele;
    //char num_modele[50];
    t_date date_mise_service;
    t_date date_maintenance;
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
void machine_afficher(const t_machine* m);

#endif //ETUDEDECAS_T_MACHINE_H
