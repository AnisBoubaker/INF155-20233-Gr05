#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int val1 = 0;
    //Initialiser le tableau
    //Si on ne spécifie pas de valeur pour toutes les cases du tableau, le reste des cases
    //est initialisé à 0
    //L'initialisation d'un tableau avec des valeurs séparées par une , n'est possible QUE
    //lors de la déclaration.
    int mon_tab[10] = {10, 20, 30 , 40, 50} ;
    int mon_tab2[100] = {0};
    //Initialiser mon_tab3 avec des 1 dans toutes les cases?
    int mon_tab3[200]; // = Pas possible avec une initilisation, il faut faire une boucle

    for(int i=0; i< 200; i++)
    {
        mon_tab3[i] = 1;
    }

    for(int i=0; i<10; i++)
    {
        printf("%i\n", mon_tab[i]);
    }
    // INTERDIT car ceci n'est pas la déclaration du tableau
    //mon_tab = {45, 34, 56, 78, 90};

    return EXIT_SUCCESS;
}
