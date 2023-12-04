#include <stdio.h>
#include "t_date.h"
#include "t_machine.h"

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

#define MAX_MACHINES 1000

int nb_aleatoire(int min, int max);


int main() {

    t_machine* machines[MAX_MACHINES]; //Tableau statique de t_machine*
    tab_ref_machines_2d machines_classees;


    machine_jeu_machines(machines, 50);

    machines_classees = machine_classer_categories(machines, 50);

    for(int i=0; i<5; i++)
    {
        printf("########## Debut des machines de la categorie %i ############ \n", i);
        int j=0;
        while(machines_classees[i][j]!=NULL)
        {
            machine_afficher( machines_classees[i][j] );
            j++;
        }
    }


    return 0;
}



