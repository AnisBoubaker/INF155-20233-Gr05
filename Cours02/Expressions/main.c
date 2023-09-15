#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre_etudiants;
    int etudiant_par_groupe;
    int resultat;
    int reste;

    int val;
    int resultat2;

    nombre_etudiants = 10;
    etudiant_par_groupe = 3;

    //Conversion explicite, ou transtypage (type cast)
    //resultat = (double)nombre_etudiants / etudiant_par_groupe;
    //resultat = nombre_etudiants*1.0 / etudiant_par_groupe;

    resultat = nombre_etudiants / etudiant_par_groupe;

    //Reste de la division entière de nombre_etudiants par etudiant_par_groupe
    reste = nombre_etudiants % etudiant_par_groupe;

    printf("Le resultat est: %i\n", resultat);
    printf("Et il reste : %i\n", reste);

    val = 10;

    //Incrémentation de val
    //val = val+1;
    val++;

    printf("Le contenu de val: %d\n", val);

    val = 11;
    //Val sera incrémenté APRES l'évaluation de l'expression. Resultat = 3
    resultat2 = val++  / 3 ;
    printf("Le resultat du calcul : %d\n", resultat2);
    printf("La valeur de val: %d\n", val);

    val = 11;
    //val sera incrémentée AVANT l'évaluation de l'expression. Resultat = 4
    resultat2 = ++val  / 3 ;
    printf("Le resultat du calcul : %d\n", resultat2);
    printf("La valeur de val: %d\n", val);

    val++;


    return EXIT_SUCCESS;
}
