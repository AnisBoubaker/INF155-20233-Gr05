/*
 * Écrire un programme qui demande à l'usager de saisir un nombre strictement positif.

Si l'usager saisit un nombre négatif, **lui redemander d'effectuer la saisie** jusqu'à
 ce que la valeur saisie soit positive.

Afficher ensuite la valeur saisie par l'usager.
 */

#include <stdio.h>
#include <stdlib.h>


int saisir_entier_positif( void )
{
    int saisie;
    do
    {
        printf("saisir une valeur positive: ");
        scanf("%i", &saisie);
    } while(saisie < 0) ;

    return saisie;
}

//Le type de retour void: la fonction ne retourne aucun résultat
void afficher_message_bienvenue( void )
{
    printf("************************************************\n");
    printf("      BIENVENUE DANS MON SUPER PROGRAMME\n");
    printf("************************************************\n");

}


int main( void ) {
    int saisie_usager;

    //printf("Veuillez saisir une valeur positive: ");
    //scanf("%i", &saisie);

    /*saisie = -1;
    while( saisie < 0)
    {
        printf("Veuillez saisir une valeur positive: ");
        scanf("%i", &saisie);
    }*/

    /*do{
        printf("Veuillez saisir une valeur positive: ");
        scanf("%i", &saisie);
    } while( saisie < 0 );*/

    afficher_message_bienvenue();

    saisie_usager = saisir_entier_positif() ;

    printf("La valeur saisie est: %i\n", saisie_usager);

    return 0;
}
