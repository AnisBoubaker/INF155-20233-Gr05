#include <stdio.h>
#include <stdlib.h>

int main(void ) {

    int saisie;

    printf("Saisir une valeur: ");
    scanf("%i", &saisie);

    //Qu'est-ce qui fait que je vais sortir de la boucle à un moment donné?
    //Il faut quelque chose, dans le corps de la boucle,
    // qui fasse en sorte que la condition va devenir fausse à un moment donné
    while(saisie > 0)
    {
        printf("Je suis fatigant!\n");
        printf("    Vraiment fatigant!!\n");

        saisie --;
    }



    return EXIT_SUCCESS;
}
