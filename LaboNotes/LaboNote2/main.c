#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int saisie;
    double moyenne;
    int compteur = 0;

    moyenne = 0;
    do
    {
        printf("Saisir un entier positif: ");
        scanf("%i", &saisie);

        if(saisie != -1)
        {
            moyenne += saisie;
            compteur++;
        }
    } while( saisie != -1 );

    if(compteur > 0) {
        moyenne = moyenne / compteur;
    }

    printf("La moyene est: %lf\n", moyenne);


    return EXIT_SUCCESS;
}