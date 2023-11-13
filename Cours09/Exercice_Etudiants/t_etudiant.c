//
// Created by Anis Boubaker on 2023-11-13.
//

#include "t_etudiant.h"

void afficher_etudiant(const t_etudiant* et)
{
    printf("Nom et prenom: %s, %s\n", (*et).nom, (*et).prenom);
    printf("Code permanent: %s\n", (*et).code_permanent);
    printf("TP1: %.2lf, TP2: %.2lf\n", (*et).tp1, (*et).tp2);
    printf("Intra: %.2lf, Final: %.2lf\n", (*et).intra, (*et).final);
}

/*
 * Problème: en envoyant un t_etudiant à la fonction, c'est toute la copie
 * d'un étudiant au complet qui est envoyée (~145 octets!)
 * On va toujours préférer envoyer un pointeur vers l'étudiant
 */
//void afficher_etudiant(t_etudiant et)
//{
//    printf("Nom et prenom: %s, %s\n", et.nom, et.prenom);
//    printf("Code permanent: %s\n", et.code_permanent);
//    printf("TP1: %.2lf, TP2: %.2lf\n", et.tp1, et.tp2);
//    printf("Intra: %.2lf, Final: %.2lf\n", et.intra, et.final);
//}
