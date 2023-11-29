#include <stdio.h>
#include <stdlib.h>

#define MAX_LECTURE 1000

int main() {

    FILE* mon_fichier;

    char nom[50] = "Valjean";
    char prenom[50] = "Jean";
    double note_tp = 80;
    double note_intra = 79;
    double note_final = 87.5;

    mon_fichier = fopen("../donnees2.txt", "w");
    if(mon_fichier==NULL)
    {
        printf("Probleme lors de l'ouverture du fichier.\n");
        exit(EXIT_FAILURE);
    }

    //Format: nom prenom note_tp note_intra note_final
    fprintf(mon_fichier, "%s %s %.2lf %.2lf %.2lf", nom, prenom, note_tp, note_intra, note_final);



    fclose(mon_fichier);







//    char chaine_lue[MAX_LECTURE];
//    FILE* mon_fichier;
//    char jour[20];
//    double temp_min, temp_max;
//
//    mon_fichier = fopen("../donnees.txt", "r");
//    if(mon_fichier==NULL)
//    {
//        printf("Probleme lors de l'ouverture du fichier.\n");
//        exit(EXIT_FAILURE);
//    }
//
//    while( fscanf(mon_fichier, "%s %lf %lf", jour, &temp_min, &temp_max) == 3) {
//        printf("Pour le jour %s, la temperature minimale est %lf, et la temp. maximale est %lf\n",
//               jour, temp_min, temp_max);
//    }
//
//
//    fclose(mon_fichier);


//    mon_fichier = fopen("../test.txt", "r");
//    if(mon_fichier == NULL)
//    {
//        printf("Probleme lors de l'ouverture du fichier.\n");
//        exit(EXIT_FAILURE);
//    }
//
//    // Tant que fgets ne retourne pas NULL.
//    // fgets retourne NULL lorsque on atteint la fin du fichier.
//    while ( fgets(chaine_lue, MAX_LECTURE, mon_fichier) )
//    {
//        printf("%s", chaine_lue);
//    }
//
//
//    fclose(mon_fichier);

    return 0;
}
