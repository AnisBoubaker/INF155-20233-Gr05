//
// Created by Anis Boubaker on 2023-11-13.
//

#ifndef EXERCICE_ETUDIANTS_T_ETUDIANT_H
#define EXERCICE_ETUDIANTS_T_ETUDIANT_H

#include <stdio.h>

#define TAILLE_MAX_NOM_PRENOM 50
#define TAILLE_MAX_CODEPERM 13

/*
 * Définir le type étudiant, où pour chaque étudiant-e on veut stocker les informations
 * suivantes:
 *
 * - Le nom
 * - Le prénom
 * - Le code permanent
 * - La note du tp1
 * - La note du tp2
 * - La note intra
 * - La note du final
 */
typedef struct etudiant{
    char nom[TAILLE_MAX_NOM_PRENOM];
    char prenom[TAILLE_MAX_NOM_PRENOM];
    char code_permanent[TAILLE_MAX_CODEPERM];
    double tp1;
    double tp2;
    double intra;
    double final;
} t_etudiant;


/*
 *
 */
void afficher_etudiant(const t_etudiant* et);


#endif //EXERCICE_ETUDIANTS_T_ETUDIANT_H
