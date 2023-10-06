#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Créer un tableau de 40 cases, chaque case contenant une valeur de type double.
    //La taille (40) est FIXE
    //La taille doit absolument être une valeur entière
    //La taille ne peut PAS être une variable. INTERDIT:  int mon_tableu[x] (x étant une variable)
    //La taille MAXIMALE du tableau est 40
    //La taille représente le pire cas de figure en nombre de valeurs
    double notes[40];
    double moyenne;
    double saisie;

    /*
     * Les indices d'un tableau vont de 0 jusqu'à la taille-1
     */

    printf("Saisir les notes des étudiant-e-s (-1 pour terminer):\n");

    int nb_notes =0;
    do {
        printf("Saisir une note: ");
        scanf("%lf", &saisie);
        if(saisie!= -1)
        {
            notes[nb_notes] = saisie;
            nb_notes++;
        }
    } while(saisie != -1.0 && nb_notes<40);
    //La condition nb_notes<40 s'assure qu'on ne dépasse pas la taille physique(maximale)
    // du tableau

    /*
     * nb_notes : représente la TAILLE EFFECTIVE de mon tableau
     */

    printf("La variable nb_notes contient: %i\n", nb_notes);

    moyenne = 0;
    for(int i=0 ; i < nb_notes; i++)
    {
        moyenne = moyenne + notes[i];
    }
    moyenne = moyenne / nb_notes;

    printf("La moyenne de la classe: %.2lf\n", moyenne);



    printf("La 2e case de mon tableau contient: %lf\n", notes[1]);

    return EXIT_SUCCESS;
}


/*
 * double note_e1;
    double note_e2;
    double note_e3;
    double note_e4;
    double note_e5;
    double moyenne;

    note_e1 = 90;
    note_e2 = 76;
    note_e3 = 85;
    note_e4 = 79;
    note_e5 = 100;

    moyenne = (note_e1 + note_e2 + note_e3 + note_e4 + note_e5) / 5;
 */