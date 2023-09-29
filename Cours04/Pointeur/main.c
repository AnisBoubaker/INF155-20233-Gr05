#include <stdio.h>

int main(void) {

    int un_entier;
    double un_reel = 10.5;

    /*
     * mon_pointeur est une variable dans laquelle je souhaite stocker
     * une adresse mémoire de quelque chose qui contient un entier
     */
    int* mon_pointeur;

    double* un_autre_pointeur;



    un_entier = 10;

    printf("L'entier vaut: %i\n", un_entier);

    printf("L'adresse de un_entier: %p\n", &un_entier);

    printf("L'adresse memoire ou se trouve un_reel: %p\n", &un_reel);

    mon_pointeur = &un_entier;

    printf("Le contenu de mon_pointeur: %p\n", mon_pointeur);

    printf("On affiche l'adresse ou se trouve la variable mon_pointeur: %p\n", &mon_pointeur);

    /*
     *  * ne s'utilise que avec un pointeur
     *  * : opérateur d'indirection ou de déréférencement
     */
    *mon_pointeur = 25;

    printf("La variable un_entier contient: %i\n", un_entier);

    printf("La valeur contenu à l'adresse qui se trouve dans mon_pointeur: %i\n", *mon_pointeur);



    /*
     *
     * Site : wwww.socrative.com
     *
     */



    return 0;
}
