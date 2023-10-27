#include <stdio.h>
#include "tri.h"


int main() {
    int mon_tableau1[] = {44, 10, 20, 55, 10, 24, 35};
    int mon_tableau2[] = {44, 10, 20, 55, 10, 24, 35};
    int mon_tableau3[] = {44, 10, 20, 55, 10, 24, 35};

    printf("Avant le tri par insertion: ");
    afficher_tableau(mon_tableau1, 7);

    tri_insertion(mon_tableau1, 7);

    printf("Apres le tri par insertion: ");
    afficher_tableau(mon_tableau1, 7);

    tri_selection(mon_tableau2, 7);

    printf("Apres le tri par selection: ");
    afficher_tableau(mon_tableau2, 7);

    tri_bulles(mon_tableau3, 7);

    printf("Apres le tri a bulles: ");
    afficher_tableau(mon_tableau3, 7);

    return 0;
}

