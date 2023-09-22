/*
 * Programme qui affiche le nombre de jours d'un mois donné par l'usager.
 * Auteur: Groupe INF155-A2023-05
 * Date: 2023-09-22
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mois;
    int nb_jours;

    printf("Quel est le mois? Saisir une valeur entre 1-12: ");
    scanf("%i", &mois);

    switch(mois)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            nb_jours = 31;
            break;
        case 2:
            nb_jours = 28;
            break;
        default:
            nb_jours = 30;
    }

    /*if(mois == 1 || mois==3 || mois==5 || mois==7 || mois == 8 || mois == 10 || mois==12)
    {
        nb_jours = 31;
    }
    else if(mois == 2)
    {
        nb_jours = 28;
    }
    else
    {
        nb_jours = 30;
    }*/

    printf("Vous avez choisi le mois %i, ce mois comporte %i jours.\n", mois, nb_jours);

    /*
     * Vous avez choisi le mois numero 2, ce mois comporte 28 jours.
     */

    return EXIT_SUCCESS;
}
