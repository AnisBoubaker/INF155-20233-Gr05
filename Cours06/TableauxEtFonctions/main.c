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

void afficher_tableau(double tab[], int taille ) ;
double moyenne_tableau(double tableau[], int taille) ;

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

    return EXIT_SUCCESS;
}

//Afficher le contenu d'un tableau
//Le paramètre tab est un tableau, en raison de la présence des [] après son identifiant
//Toute fonction qui reçoit un tableau en paramètre, DOIT également recevoir un 2e paramètre
//qui constitue la taille EFFECTIVE du tableau
void afficher_tableau(double tab[], int taille )
{
    for(int i=0; i<taille; i++ )
    {
        printf("Case num. %i: %lf\n", i+1, tab[i]);
    }
}

/*
 * Écrire une fonction qui calcule la moyenne des valeurs d'un tableau de double.
 * La fonction s'appellera moyenne_tableau
 */
double moyenne_tableau(double tableau[], int taille)
{
    double somme = 0;
    for(int i=0; i<taille; i++)
    {
        somme += tableau[i];
    }
    return somme / taille;
}