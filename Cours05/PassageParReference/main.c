/*
 * Créer la fonction min_max_de_3 qui identifie le minimum ET le maximum parmi
 * trois valeurs réelles.
 */

#include <stdio.h>
#include <stdlib.h>

void min_max_de_3(double val1, double val2, double val3, double* adr_min, double* adr_max);

int main(void) {

    double min, max;

    min_max_de_3(10, 2, 45, &min, &max);

    printf("La valeur minimale: %lf, et la valeur maximale: %lf\n", min, max);

    return 0;
}

void valeur_absolue(double* val1, double* val2, double* val3)
{
    *val1 = *val1<0 ? -*val1 : *val1;
    *val2 = *val2<0 ? -*val2 : *val2;
    *val3 = *val3<0 ? -*val3 : *val3;
}

void min_max_de_3(double val1, double val2, double val3, double* adr_min, double* adr_max)
{
    double min, max;

    valeur_absolue(&val1, &val2, &val3);

    min = val1;
    if(val2<min){
        min = val2;
    }
    if(val3<min){
        min = val3;
    }

    max = val1;
    if(val2 > max){
        max = val2;
    }
    if(val3>max){
        max = val3;
    }

    *adr_min = min;
    *adr_max = max;
}

/*
 * La fonction retourne le minimum et stocke le maximum dans une adresse (référence) reçue
 * en paramètre
 */
double min_max_de_3_ver2(double val1, double val2, double val3, double* adr_max)
{
    double min, max;

    min = val1;
    if(val2<min){
        min = val2;
    }
    if(val3<min){
        min = val3;
    }

    max = val1;
    if(val2 > max){
        max = val2;
    }
    if(val3>max){
        max = val3;
    }

    *adr_max = max;

    return min;
}
