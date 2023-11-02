#include <stdio.h>
#include <string.h>

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

//Détermine la taille de salutations 3
//    int taille =0;
//    while(salutation3[taille]!='\0')
//    {
//        taille++;
//    }
    int taille = strlen(salutation3);
    printf("La taille de la chaine salutations3: %i\n", taille);

    //salutation = salutation3;
//    for(int i=0; i < taille+1 ; i++)
//    {
//        salutations[i] = salutation3[i];
//    }

    //strcpy est la fonction qu'on utilise pour copier une chaine dans une autre (affectation)
    strcpy(salutations, salutation3);
    printf("Nouvelle valeur de salutations: %s\n", salutations );

    //salutations = "Salut a tous!"
    strncpy(salutations, "Salut a tous les etudiant-es du cours INF155", TAILLE_MAX);
    printf("Nouvelle valeur de salutations: %s\n", salutations );

    //##############################################
    char ch1[TAILLE_MAX];
    char ch2[TAILLE_MAX];
    char ch_totale[TAILLE_MAX];
    int nb_etudiants = 45;

    strncpy(ch1, "Bonjour", TAILLE_MAX);
    strncpy(ch2, " a tous!", TAILLE_MAX);
    strncat(ch1, ch2, TAILLE_MAX);
    printf("ch1 contient: %s\n", ch1);


    strncpy(ch1, "Bonjour", TAILLE_MAX);
    strncpy(ch2, "a tous", TAILLE_MAX);

    sprintf(ch_totale, "%s %s les %i etudiants et etudiantes de INF155.\n", ch1, ch2, nb_etudiants);
    printf("%s\n", ch_totale);


    strncpy(ch1, "Allo", TAILLE_MAX);
    strncpy(ch2, "Azlo", TAILLE_MAX);

    //NE JAMAIS COMPARER DEUX CHAINES DE CARACTERES AVEC ==
    int resultat_comparaison;

    resultat_comparaison = strcmp(ch1, ch2);
    if( resultat_comparaison == 0)
    {
        printf("Les deux chaines sont identiques!\n");
    }
    else if( resultat_comparaison > 0)
    {
        printf("Ch1 est plus grande que ch2!\n");
    }
    else
    {
        printf("Ch1 est plus petite que ch2!\n");
    }


    return 0;
}
