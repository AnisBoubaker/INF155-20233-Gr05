#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 50

int compter_mots(char* chaine);

int main() {
    char saisie[TAILLE_MAX];

    printf("Saisir une phrase: ");
    fgets(saisie, TAILLE_MAX, stdin);
    saisie[ strlen(saisie)-1 ] = '\0';

    printf("Il y a %i mots.\n", compter_mots(saisie) );

    return 0;
}

/*
 * J'aime programmer en C
 *
 * 3 espaces
 * 4 mots
 */

int compter_mots(char* chaine)
{
    int compteur =0;
    int taille = strlen(chaine);

    if(taille == 0)
    {
        return 0;
    }
    for(int i=0; i<taille ; i++)
    {
        if(chaine[i]==' ' || chaine[i]==',' || chaine[i]=='.')
        {
            compteur++;
        }
    }
    return compteur+1;
}
