/*
 * Écrire un programme qui fait la somme des entiers entre 1 et une valeur (n).
 *
 * La valeur (n) est saisie par l'usager.
 *
 * Par exemple:
 * L'utilisateur siasit la valeur 10, votre programme doit afficher la valeur 55.
 *
 * En effet:
 * 55 = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10
 *
 * somme = 0
 *
 * somme = somme + 1
 * somme = somme + 2
 * somme = somme + 3
 * ...
 * somme = somme + 10
 */



#include <stdio.h>

int main() {
    int somme;
    int compteur;

    int saisie;

    printf("Saisir l'entier maximal à additionner: ");
    scanf("%i", &saisie); //10

    somme = 0;
    compteur = 1;
    while( compteur <= saisie  ) //C'est une condition TANT QUE
    {
        somme = somme + compteur ; // somme += compteur;
        compteur ++;
    }

    /*
     * La formule:
     * somme = saisie * (saisie+1) / 2
     */

    /*somme = somme + 1;
    somme = somme + 2;
    somme = somme + 3;
    somme = somme + 4;
    somme = somme + 5;
    somme = somme + 6;
    somme = somme + 7;
    somme = somme + 8;
    somme = somme + 9;
    somme = somme + 10;*/

    printf("La somme des termes de 1 à 10: %i\n", somme);

    return 0;
}
