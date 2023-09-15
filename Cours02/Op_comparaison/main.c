#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val1 = 10;
    int val2 = 10;
    int resultat;

    int x;

    resultat = (val1 == val2) * 10 + 5;

    printf("Le resultat est: %d\n", resultat);


    x = 5;
    printf("La comparaison ET donne: %i\n", x>=5 && x<20);

    x = 1000000;
    printf("Le resultat de l'expression bizarre: %i\n", 5<x<20 );

    x = 0;
    printf("Resultat: %i\n", x && x<5);


    return EXIT_SUCCESS;
}
