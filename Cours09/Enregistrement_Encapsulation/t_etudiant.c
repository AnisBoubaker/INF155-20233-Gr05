//
// Created by Anis Boubaker on 2023-11-13.
//

#include "t_etudiant.h"

// Fonction constructeur d'un étudiant
t_etudiant* t_etudiant_init(void)
{
    t_etudiant* nouvel_etudiant;

    nouvel_etudiant = (t_etudiant*)malloc(sizeof(t_etudiant));
    if(nouvel_etudiant == NULL)
    {
        return NULL;
    }

    (*nouvel_etudiant).nom = (char*)malloc(sizeof(char)*TAILLE_MAX_NOM_PRENOM);
    if((*nouvel_etudiant).nom == NULL)
    {
        free(nouvel_etudiant);
        return NULL;
    }

    (*nouvel_etudiant).prenom = (char*) malloc(sizeof(char)*TAILLE_MAX_NOM_PRENOM);
    if((*nouvel_etudiant).prenom == NULL)
    {
        free((*nouvel_etudiant).nom);
        free(nouvel_etudiant);
        return NULL;
    }

    return nouvel_etudiant;
}

t_etudiant* t_etudiant_init2(char* nom, char* prenom)
{
    t_etudiant* nouvel_etudiant;

    nouvel_etudiant = (t_etudiant*)malloc(sizeof(t_etudiant));
    if(nouvel_etudiant == NULL)
    {
        return NULL;
    }

    (*nouvel_etudiant).nom = (char*)malloc(sizeof(char)*(strlen(nom)+1));
    if((*nouvel_etudiant).nom == NULL)
    {
        free(nouvel_etudiant);
        return NULL;
    }

    (*nouvel_etudiant).prenom = (char*) malloc(sizeof(char)*TAILLE_MAX_NOM_PRENOM);
    if((*nouvel_etudiant).prenom == NULL)
    {
        free((*nouvel_etudiant).nom);
        free(nouvel_etudiant);
        return NULL;
    }

    return nouvel_etudiant;
}

void set_nom(t_etudiant* etudiant, char* nom)
{
    (*etudiant).nom = (char*)realloc((*etudiant).nom, sizeof(char)*(strlen(nom)+1));
    strcpy((*etudiant).nom, nom);
}



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
