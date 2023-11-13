/***
 * # Exercice
 * Écrire la fonction `saisie_nom_prenom` qui demande à l'usager de saisir son prénom **puis** son nom
 * de famille. La fonction doit retourner une chaine de caractères contenant le nom et le prénom sous
 * cette forme:
 *
 * `Nom, prénom`
 *
 * Votre fonction ne reçoit aucun argument et retourne la chaine de caractères résultante.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAILLE_MAX_NOM_PRENOM 250

char* saisie_nom_prenom(void);

int main() {
    char* nom_prenom;

    nom_prenom = saisie_nom_prenom();
    if(nom_prenom == NULL)
    {
        printf("Erreur d'allocation memoire!\n");
        exit(EXIT_FAILURE);
    }

    printf("%s\n", nom_prenom);

    return EXIT_SUCCESS;
}

char* saisie_nom_prenom(void)
{
    char* resultat;
    char* tmp; //Variable temporaire pour la réallocation
    char prenom[100];

    resultat = (char*)malloc(sizeof(char)*TAILLE_MAX_NOM_PRENOM);
    if(resultat == NULL)
    {
        return NULL;
    }

    printf("Prenom: ");
    fgets(prenom, 100, stdin);
    prenom[strlen(prenom)-1 ] = '\0';

    // Nom, prenom
    printf("Nom: ");
    fgets(resultat, TAILLE_MAX_NOM_PRENOM-strlen(prenom)-2, stdin);
    resultat[strlen(resultat)-1] = '\0';

    strcat(resultat, ", ");
    strcat(resultat, prenom);

    tmp = (char*)realloc(resultat,sizeof(char)*(strlen(resultat)+1));
    if(tmp!=NULL)
    {
        resultat = tmp;
    }

    return resultat;
}


















