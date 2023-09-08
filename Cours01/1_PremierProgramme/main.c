/*
 * Premier programmen en C qui affiche "Hello World"
 * Auteur: Anis Boubaker
 * Date: 2023-09-08
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Déclarations de variables
    int age = 20; //Déclaration de la variable age
    short ordre = -1;
    double salaire = -1000.75; //Un point (.) sépare la partie décimale de la partie entière.
    char num_etage = 3;
    char note = 'A'+3;




    //Le code "\n" veut dire retour à la ligne
    //Le code "%i" veut dire remplace par un entier.
    printf("Le contenu de la variable age est: %i\n", age);

    //"%c" : remplace par un caractère
    printf("La note obtenue est: %c\n", note);

    printf("La note obtenue est: %i\n", note);

    printf("La note obtnue en caractere: %c et en version entiere: %i\n", note, note);

    printf("L'age de la personne est: %i\n", age);
    age = 18;
    printf("L'age de la personne est: %i\n", age);

    //Conetnu de mon programme
    printf("Hello, World!\n");


    return EXIT_SUCCESS;
}
