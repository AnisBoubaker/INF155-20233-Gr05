#include <stdio.h>
#include <string.h>

#define TAILLE_SAISIE 100
#define MAX_AFFICHAGE 40

int main() {
    char saisie[TAILLE_SAISIE];
    int a;
    // "J'aime programmer en C"
    //strncpy(saisie,  "J'aime programmer en C car le langage C est la mere de tous les langages", MAX_AFFICHAGE);

    //Attention : ne jamais mettre de & avec les chaines de caractères dans le scanf
    //car un tableau est déjà un pointeur (adresse)
    printf("Saisir une chaine de caracteres: ");
    //Probleme de scanf : arrete la lecture a un espace, tabulation ou ENTER
    //scanf("%s", saisie);
    fgets(saisie, TAILLE_SAISIE, stdin);
    saisie[ strlen(saisie) - 1 ] = '\0';

    //saisie[MAX_AFFICHAGE] = '\0';
    //strcat(saisie, "...");

    printf("%s", saisie);

    return 0;
}
