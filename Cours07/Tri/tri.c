#include "tri.h"

void tri_insertion(int tab[], int taille)
{
    int x;
    int j;

    for(int i=1; i<taille ; i++)
    {
        x = tab[i];
        j = i;
        while(j>0 && tab[j-1] > x)
        {
            tab[j] = tab[j-1];
            j = j - 1;
        }
        tab[j] = x;
    }
}


void tri_selection(int tab[], int taille)
{
    int indice_min;
    for(int i=0; i < taille ; i++)
    {
        indice_min = i;
        for(int j=i+1; j < taille; j++)
        {
            if(tab[j] < tab[indice_min])
            {
                indice_min = j;
            }
        }
        if(indice_min != i)
        {
            int tmp = tab[i];
            tab[i] = tab[indice_min];
            tab[indice_min] = tmp;
        }
    }
}


void tri_bulles(int tab[], int taille)
{
    for(int i=taille -1 ; i>0 ; i--)
    {
        for(int j=0; j<i ; j++)
        {
            if(tab[j] > tab[j+1])
            {
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}




void afficher_tableau(int tab[], int taille)
{
    for(int i=0; i < taille; i++)
    {
        printf("%i ", tab[i]);
    }
    printf("\n");
}
