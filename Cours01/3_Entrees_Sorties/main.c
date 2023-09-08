/*
 * Auteur: Anis Boubaker
 * Date: 2023-09-08
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int age;
   double salaire;
   unsigned char valeur;

   printf("Quel est votre age? ");
   scanf("%i", &age);
   printf("L'age de la personne est: %i\n", age);

   printf("Quel est votre salaire? ");
   scanf("%lf", &salaire);
   printf("Le salaire de la personne est: %lf\n", salaire);


   printf("Saisir une valeur <255: ");
   scanf("%u", &valeur);
   printf("Valeur saisie: %u", valeur);

   return EXIT_SUCCESS;
}
