#include <stdio.h>

/*
 * Créer un type de données où je vais stocker dans la même variable les
 * informations suivantes:
 * - temperature
 * - humidite_relative
 * - concentration de CO2
 */

//Définir le type lecture
//Enregistrement
/*struct lecture{
  double temperature;
  double humidite;
  double concentration_co2;
  int heure;
  int minutes;
  int secondes;
};
typedef struct lecture t_lecture;*/

//Écriture alternative en une seule opération
typedef struct lecture{
    double temperature;
    double humidite;
    double concentration_co2;
    int heure;
    int minutes;
    int secondes;
} t_lecture;

int main() {
    //struct lecture lecture1;
    t_lecture lecture1;

    lecture1.temperature = 22.5;
    lecture1.humidite = 45;
    lecture1.concentration_co2 = 10.5;
    lecture1.heure = 10;
    lecture1.minutes = 7;
    lecture1.secondes = 35;

    printf("Heure: %i:%i:%i\n", lecture1.heure, lecture1.minutes, lecture1.secondes);
    printf("Temperature: %.2lf\n", lecture1.temperature);
    printf("Humidite: %.2lf\n", lecture1.humidite);
    printf("Concentration de CO2: %.2lf\n", lecture1.concentration_co2);

    /**************************************************/

    int tab[10];

    t_lecture mes_lectures[100];

    mes_lectures[0].temperature = 22;
    mes_lectures[0].humidite = 35;
    mes_lectures[0].concentration_co2 = 10;
    mes_lectures[0].heure = 12;
    mes_lectures[0].minutes = 20;
    mes_lectures[0].secondes = 17;



    return 0;
}
