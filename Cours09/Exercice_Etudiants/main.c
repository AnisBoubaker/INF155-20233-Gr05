#include <stdio.h>
#include <string.h>
#include "t_etudiant.h"



int main() {
    /*
     * Créer un tableau de 40 étudiants, et remplir les informations du premier etudiant
     * du tableau (informations de votre choix)
     */
    t_etudiant classe[40];
    printf("La taille de la classe en octets: %i\n", sizeof(classe));

    /*
     * Marie Laforest
     * LAFM00000000
     * tp1: 90, tp2: 87, intra: 79, final: 80
     */
    strncpy(classe[0].prenom ,  "Marie", TAILLE_MAX_NOM_PRENOM);
    strncpy(classe[0].nom, "Laforest", TAILLE_MAX_NOM_PRENOM);
    strncpy(classe[0].code_permanent, "LAFM00000000", TAILLE_MAX_CODEPERM);
    classe[0].tp1 = 90;
    classe[0].tp2 = 87;
    classe[0].intra = 79;
    classe[0].final = 80;

    strncpy(classe[1].prenom ,  "Jean", TAILLE_MAX_NOM_PRENOM);
    strncpy(classe[1].nom, "Valjean", TAILLE_MAX_NOM_PRENOM);
    strncpy(classe[1].code_permanent, "VALJ00000000", TAILLE_MAX_CODEPERM);
    classe[1].tp1 = 92;
    classe[1].tp2 = 90;
    classe[1].intra = 65;
    classe[1].final = 80;

    afficher_etudiant(&classe[0]);
    afficher_etudiant(&classe[1]);



    return 0;
}

