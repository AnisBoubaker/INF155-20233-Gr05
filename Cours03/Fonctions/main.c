#include <stdio.h>


/*
 * Définition de la fonction somme_2_entiers
 */
int somme_2_entiers(int a, int b)
{
    int resultat;
    resultat = a+b;
    return resultat;
}

int demander_et_sommer_deux_entiers(void)
{
    int val1, val2;
    int resultat;

    printf("Saisir la premiere valeur: ");
    scanf("%i", &val1);

    printf("Saisir la deuxieme valeur: ");
    scanf("%i", &val2);

    resultat = val1 + val2;

    return resultat;
}

int main(void)
{
    int somme;
    int val1, val2;

    printf("Saisir la premiere valeur: ");
    scanf("%d", &val1);

    printf("Saisir la deuxieme valeur: ");
    scanf("%d", &val2);


    somme = somme_2_entiers(val1, val2);

    //somme = demander_et_sommer_deux_entiers(); //Nécessaire de mettre les parenthèses, même si pas de paramètres

    printf("Le contenu de la variable somme: %i\n", somme);

    return 0;
}
