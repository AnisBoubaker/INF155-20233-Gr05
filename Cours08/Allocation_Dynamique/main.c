#include <stdio.h>
#include <stdlib.h>

int main() {

    int* entier_dynamique;

    entier_dynamique = (int*)malloc(sizeof(int));
    *entier_dynamique = 10;

    free(entier_dynamique);

    entier_dynamique = (int*)malloc(4);
    *entier_dynamique = 50;

    printf("Contenu de l'entier alloue dynamiquement: %i\n", *entier_dynamique);


    return 0;
}
