#include <stdio.h>
#include "t_etudiant.h"
#include <string.h>
#include <stdlib.h>

int main() {
    t_etudiant* etudiant1;
    t_etudiant *etudiant2;

    etudiant1 = t_etudiant_init();

    etudiant2 = t_etudiant_init2("Valjean", "Jean");

    strcpy((*etudiant1).nom, "Laforest");
    strcpy((*etudiant1).prenom, "Marie");
    strcpy((*etudiant1).code_permanent, "LAFM56565456");
    (*etudiant1).tp1 = 80;
    (*etudiant1).tp2 = 90;
    (*etudiant1).intra = 70;
    (*etudiant1).final = 80;

    afficher_etudiant(etudiant1);

    return 0;
}
