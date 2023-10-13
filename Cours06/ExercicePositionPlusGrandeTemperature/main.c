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

#include <stdio.h>
#include <stdlib.h>

//Constante de précompilation
#define TAILLE_MAX 100


int main(void) {
    int nb_temperatures;
    double temperatures[TAILLE_MAX];
    double humidites[TAILLE_MAX];
    int pos_max; //La position dans le tableau de la température maximale


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

    return EXIT_SUCCESS;
}
