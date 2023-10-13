/**
 * EXERCICE
 * Écrire un programme (main) qui demande à l'usager de saisir le nombre de températures
 * dont il dispose et qui lui demande ensuite de saisir l'ensemble des températures,
 * qui seront stockées dans un tableau.
 *
 * Supposez que le nombre de températures dont l'usager dispose n'excèdera jamais 100.
 *
 * Votre programme doit ensuite afficher **la position** (dans le tableau) de la température
 * la plus élevée.
 */

//Les modules inclus avec <...> font partie des librairies qui viennent avec
//l'installation du compilateur
#include <stdio.h>
#include <stdlib.h>
#include "module_tableaux.h"
#include "Toto/tata.h"

//Constante de précompilation
#define TAILLE_MAX 100


int main(void) {
    int nb_temperatures;
    double temperatures[TAILLE_MAX];
    double humidites[TAILLE_MAX];
    int pos_max; //La position dans le tableau de la température maximale
    int valeurs_int[TAILLE_MAX] = {10, 20, 30 , 40, 50};
    double valeurs_double[TAILLE_MAX] = {10, 20, 30 , 40, 50};


    printf("Combien de temperatures: ");
    scanf("%i", &nb_temperatures);

    for(int i=0; i<nb_temperatures; i++)
    {
        printf("Saisir la temperature num.%i: ", i+1);
        scanf("%lf", &temperatures[i] );
    }

    pos_max = 0;
    for(int i=1 ; i<nb_temperatures; i++)
    {
        // pos_max = temperatures[i] > temperatures[pos_max] ? i : pos_max;
        if(temperatures[i] > temperatures[pos_max])
        {
            pos_max = i;
        }
    }
    printf("La température maximale se trouve a: %i\n", pos_max+1);

//    for(int i=0; i<nb_temperatures; i++)
//    {
//        printf("La temperature num. %i: %lf\n", i+1, temperatures[i]);
//    }
    //Pour passer un tableau en paramètre, ON MET JUSTE LE NOM DU TABLEAU
    afficher_tableau(temperatures, nb_temperatures);

    printf("La moyenne des temperatures: %lf\n", moyenne_tableau(temperatures, nb_temperatures));

    printf("La moyenne des valeurs: %lf\n", moyenne_tableau(valeurs_int, 5));
    printf("La moyenne des valeurs: %lf\n", moyenne_tableau(valeurs_double, 5));

    mettre_a_zero(temperatures, nb_temperatures);
    afficher_tableau(temperatures, nb_temperatures);


    return EXIT_SUCCESS;
}

