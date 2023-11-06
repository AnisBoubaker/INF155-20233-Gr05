#include <stdio.h>
#include <stdlib.h>

int main() {
    int nb_notes;
    double* notes;

    printf("Combien de notes? ");
    scanf("%i", &nb_notes);

    notes = (double*)malloc(nb_notes*sizeof(double));
    //Variante avec calloc.
    //Calloc alloue l'espace mémoire et le remplit de 0.
    //notes = (double*)calloc(nb_notes, sizeof(double));

    if(notes == NULL) //IMPORTANT: Toujours vérifier que l'allocation a fonctionné
    {
        printf("Erreur d'allocation memoire: plus de memoire.\n");
        exit(EXIT_FAILURE);
    }

    for(int i=0; i<nb_notes; i++)
    {
        printf("Saisir la note %i: ", i);
        scanf("%lf", &notes[i]);
    }

    printf("Toutes les notes saisies: ");
    for(int i=0; i<nb_notes; i++)
    {
        printf("%lf\n", notes[i]);
    }

    nb_notes = nb_notes * 2;

    //Réallocation du tableu pour le double de la taille initiale
    double* tmp;
    tmp = realloc(notes, nb_notes*sizeof(double));
    if(tmp!=NULL) //S'assurer que la reallocation a fonctionné
    {
        notes = tmp;
    }
    else
    {
        printf("Erreur d'allocation: plus de memoire!\n");
        exit(EXIT_FAILURE);
    }







    //Libère l'espace mémoire occupé par le tableau de notes.
    free(notes);


//    *(notes+0) = 50.5;
//    *(notes+1) = 80.2;
//    *(notes+2) = 98;
    notes[0] = 50.5;
    notes[1] = 80.2;
    notes[2] = 98;


//    int mon_tableau[10] = {10, 20, 30 , 40, 50, 60};
//    printf("%i\n", *mon_tableau  );
//    printf("%i\n", *(mon_tableau+1) );
//    for(int i=0; i<6 ; i++)
//    {
//        printf("%i\n", *(mon_tableau+i) );
//    }

    return 0;
}
