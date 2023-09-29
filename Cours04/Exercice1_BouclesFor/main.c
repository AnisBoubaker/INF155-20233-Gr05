/*
 * # Exercice 1
 * Écrire un programme qui fait la somme des **nombres pairs** entre deux valeurs **m** et **n** (incluses)
 * saisies par l'usager.
 */

#include <stdio.h>
#include <stdlib.h>


//prototype de la fonction:
//type_de_retour  identifiant( liste_des_arguments)

int somme_des_pairs(int debut, int fin)
{
    //Les paramètres: ce sont des variables déjà initialisées
    //On assume qu'ils ont déjà la valeur pour effectuer le travail

    int somme = 0;
    int compteur;

    if(debut % 2 == 1)
    {
        debut++;
    }
    for(compteur = debut; compteur <= fin; compteur += 2)
    {
        somme += compteur;
    }

    return somme;
}


int main(void) {
    int debut, fin;
    int compteur;
    int somme = 0;
    int tata = 20;

    printf("Saisir la valeur du debut de l'intervalle: ");
    scanf("%i", &debut);

    printf("Saisir la valeur de la fin de l'intervalle: ");
    scanf("%i", &fin);

    /*compteur = debut;   //1- Initialisation
    while( compteur <= fin ) //2- Condition
    {
        if(compteur % 2 == 0 )
        {
            somme = somme + compteur;
        }
        compteur++; //3-Incrément
    }*/

    /*
     * 10 pair? si oui on additionne
     * 11 pair? non
     * 12 pair? oui, j'additionne
     * 13 pair? non
     *
     */

    /*for( compteur = debut; compteur<=fin; compteur++  )
    {
        if(compteur % 2 == 0)
        {
            somme = somme + compteur;
        }
    }*/

    /*if(debut % 2 == 1) // if(debut %2 !=0 )
    {
        debut ++;
    }
    for(compteur = debut; compteur <= fin; compteur = compteur+2) //compteur += 2
    {
        somme = somme + compteur;
    }*/

    compteur = 10;

    somme =  somme_des_pairs(debut, fin);


    printf("La somme des valeurs paires : %i\n", somme);


    return EXIT_SUCCESS;
}
