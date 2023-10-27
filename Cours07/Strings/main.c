#include <stdio.h>

#define TAILLE_MAX 100

int main() {

    //Une chaine de caracteres est un tableau de caractères qui se termine par le
    //caractère \0
    char salutations[TAILLE_MAX] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', ' ', 'a', ' ', 't', 'o', 'u', 's', '\0'};

    // Lorsqu'on initialise une chaine avec les "...", le \0 est ajouté automatiquement
    char salutations2[] = "Bonjour a tous";

    char salutation3[] = "Bonjour a moi";

//    for(int i=0; i<14; i++)
//    {
//        printf("%c", salutations[i]);
//    }
    //%s: Pour afficher une chaine de caractères (String)
    printf("%s\n", salutations);
    printf("%s\n", salutations2);

    //Bonjour a moi
//    salutations[10] = 'm';
//    salutations[11] = 'o';
//    salutations[12] = 'i';
//    salutations[13] = '\0';
//    printf("%s", salutations);

    int taille =0;
    while(salutation3[taille]!='\0')
    {
        taille++;
    }

    printf("La taille de la chaine salutations3: %i\n", taille);

    //salutation = salutation3;
    for(int i=0; i < taille+1 ; i++)
    {
        salutations[i] = salutation3[i];
    }

    printf("Nouvelle valeur de salutations: %s\n", salutations );

    return 0;
}
