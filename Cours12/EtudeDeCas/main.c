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

    t_machine** machines_chargees;
    int nb_machines;

    machines_chargees = machine_charger_machines("../liste_machines.txt", &nb_machines);
    if(machines_chargees == NULL)
    {
        printf("Erreur lors du chargement des machines\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0 ; i<nb_machines; i++)
    {
        machine_afficher( machines_chargees[i] );
    }


//    machine_jeu_machines(machines, 50);
//
//    if(machine_sauvegarder_machines("../liste_machines.txt", machines, 50))
//    {
//        printf("Machines sauvegadees avec succes.\n");
//    }
//    else
//    {
//        printf("Erreur lors de la sauvegarde des machines dans un fichier.");
//    }


//    machines_classees = machine_classer_categories(machines, 50);


//    for(int i=0; i<5; i++)
//    {
//        printf("########## Debut des machines de la categorie %i ############ \n", i);
//        int j=0;
//        while(machines_classees[i][j]!=NULL)
//        {
//            machine_afficher( machines_classees[i][j] );
//            j++;
//        }
//    }


    return 0;
}



