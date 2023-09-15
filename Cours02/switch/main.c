#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char choix;
    
    printf("Pressez 'A', 'B' ou 'C' pour continuer:");	
    scanf("%c", &choix);

    /*if (choix == 'A')
    {
        printf("Vous avez choisi A, bon choix!\n");
    }
    else if (choix == 'B')
    {
        printf("Vous avez choisi B, pas mal!\n");
    }
    else if (choix == 'C')
    {
        printf("Vous avez choisi C, c’est bien!\n");
    } else
    {
        printf("vous deviez saisir A, B ou C… Quel dommage!");
    }*/

    switch( choix )
    {
        case 'A':
            printf("Vous avez choisi A, bon choix!\n");
            break; //Sortir du switch, ne pas exécuter les cas qui suivent
        case 'B':
            printf("Vous avez choisi B, pas mal!\n");
            break;
        case 'C':
            printf("Vous avez choisi C, c’est bien!\n");
            break;
        default:
            printf("vous deviez saisir A, B ou C… Quel dommage!");
    }

    return EXIT_SUCCESS;
}
