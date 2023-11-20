#include <stdio.h>
#include "t_date.h"

/*
 * Énumération
 * Définir les valeurs possibles pour une donnée
 */

enum niveau_huile {
    BAS = 5,
    MOYEN = 10,
    ELEVE = 15,
    TRES_ELEVE
};
typedef enum niveau_huile e_niveau_huile;

int main() {

    e_niveau_huile niveau;
    //enum niveau_huile niveau;



    niveau = TRES_ELEVE;

    printf("Le niveau d'huile: %i\n\n\n", niveau);


    t_date d1, d2;

    d1.annee = 2023;
    d1.mois = 11;
    d1.jour = 20;

    d2.annee = 2023;
    d2.mois = 11;
    d2.jour = 20;

    int comparaison = date_cmp(d1, d2);

    if( comparaison > 0 )
    {
        printf("d1 est plus recente\n");
    }
    else if( comparaison < 0 )
    {
        printf("d2 est plus recente\n");
    }
    else
    {
        printf("Les deux dates sont identiques.\n");
    }


    if( date_set_date(&d1, 29, FEVRIER, 2023) )
    {
        printf("La date a bien ete definie: %i/%i/%i\n", d1.jour, d1.mois, d1.annee);
    }
    else
    {
        printf("La date fournie est invalide!\n");
    }


    return 0;
}
