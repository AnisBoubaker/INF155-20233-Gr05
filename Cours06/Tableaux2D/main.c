#include <stdio.h>
#include <stdlib.h>

#define NB_COLONNES 4

void afficher_tab2d(const int tab2d[][NB_COLONNES], int nb_lignes, int nb_colonnes);

int main(void) {
    //Tableau à deux dimensions d'entiers de 6 lignes et 4 colonnes
    int tab2d[6][NB_COLONNES];

    tab2d[3][1] = 10;

    printf("Contenu de la ligne 3, colonne 1: %d\n", tab2d[3][1]);


    for(int i=0; i<6; i++) //Le compteur i représente la ligne sur laquelle on est
    {
        for (int j = 0; j < 4; j++) //Le compteur j représente la colonne sur laquelle on est
        {
            tab2d[i][j] = 10;
        }
    }

    afficher_tab2d(tab2d,6, 4);

//    for(int i=0; i<6; i++)
//    {
//        for(int j=0; j<4; j++)
//        {
//            // \t : tabulation
//            printf("%i\t", tab2d[i][j]);
//        }
//        printf("\n");
//    }

//    for(int j=0; j< 4; j++)
//    {
//        tab2d[1][j] = 10;
//    }
//    for(int j=0; j< 4; j++)
//    {
//        tab2d[2][j] = 10;
//    }

    return 0;
}


/*
 * Passer un tableau 2D à une fonction: Il est OBLIGATOIRE
 * de spécifier la taille MAXIMALE en colonnes des tableaux
 * reçus.
 * Tout tableau 2D passé en paramètre doit être accompagné de deux paramètres:
 * - la taille effective en lignes
 * - la taille effective en colonnes
 */
void afficher_tab2d(const int tab2d[][NB_COLONNES], int nb_lignes, int nb_colonnes)
{
    for(int i=0; i<nb_lignes; i++) //i=0
    {
        for(int j=0; j<nb_colonnes; j++) //j=0
        {
            printf("%d\t", tab2d[i][j]);
        }
        printf("\n");
    }

}