#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*int saisie1; //La premiere valeur saisie
    int saisie2; //La seconde valeur saisie*/

    int saisie1, saisie2; //Les deux valeurs saisies par l'usager

    printf("Saisir la premiere valeur: ");
    scanf("%i", &saisie1); //10

    printf("Saisir la deuxieme valeur: ");
    scanf("%i", &saisie2); //100

    /*
    if(saisie1 > saisie2)
    {
        printf("La premiere valeur saisie est plus grande!\n");
    }
    else if(saisie2 > saisie1)
    {
        printf("La deuxieme valeur saisie est plus grande!\n");
    }
    else
    {
        printf("Les deux valeurs sont egales!\n");
    }*/



    //ATTENTION: Jamais de ; après un if ou un else!!
    if(saisie1 > saisie2)
    {
        printf("La premiere valeur saisie est plus grande!\n");
    }
    else
    {
        if(saisie2 > saisie1)
        {
            printf("La deuxieme valeur saisie est plus grande!\n");
        }
        else
        {
            printf("Les deux valeurs sont egales!\n");
        }
    }



    return EXIT_SUCCESS;
}
