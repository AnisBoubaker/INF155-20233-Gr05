//
// Created by Anis Boubaker on 2023-11-20.
//

#include "t_machine.h"



t_machine* machine_init(int num, const char* num_modele)
{
    t_machine* nouvelle_machine;

    nouvelle_machine = (t_machine*)malloc(sizeof(t_machine));
    if(nouvelle_machine == NULL)
    {
        return NULL;
    }

    nouvelle_machine->num =  num;

    //Allouer l'espace pour la chaine de caractères num_modele
    nouvelle_machine->num_modele = (char*)malloc(sizeof(char)*(strlen(num_modele)+1));
    if(nouvelle_machine->num_modele==NULL)
    {
        free(nouvelle_machine);
        return NULL;
    }
    strcpy(nouvelle_machine->num_modele, num_modele);

    nouvelle_machine->date_mise_service.jour = 0;
    nouvelle_machine->date_mise_service.mois = 0;
    nouvelle_machine->date_mise_service.annee = 0;

    nouvelle_machine->date_maintenance.jour = 0;
    nouvelle_machine->date_maintenance.mois = 0;
    nouvelle_machine->date_maintenance.annee = 0;

    return nouvelle_machine;
}


/*
Libère l'espace mémoire d'une machine.
ENTREES:
machine (référence vers une machine): la machine à libérer SORTIE:
Aucune.
*/
void machine_free(t_machine* machine)
{
    free(machine->num_modele);
    free(machine);
}


void machine_afficher(const t_machine* m)
{
    printf("********** Machine num: %i **********\n", m->num);
    printf("Num. Modele: %s\n", m->num_modele);
    printf("Mise en service: %i/%i/%i\n", m->date_mise_service.jour, m->date_mise_service.mois, m->date_mise_service.annee);
    printf("Dern. maintenance: %i/%i/%i\n", m->date_maintenance.jour, m->date_maintenance.mois, m->date_maintenance.annee);
    printf("**************************************\n\n");
}

int nb_aleatoire(int min, int max)
{
    return min + (int)(rand() / (RAND_MAX + 0.001) * (max - min + 1));
}

void machine_jeu_machines(t_machine* machines[], int nb)
{
    char num_modele[10];
    for(int i=0; i<nb; i++)
    {
        sprintf(num_modele, "%c%i%c%i", (char)nb_aleatoire(65, 90), nb_aleatoire(100, 500), (char)nb_aleatoire(65, 90),
                nb_aleatoire(100, 500));
        machines[i] = machine_init(i, num_modele);
        date_set_date(&(machines[i]->date_mise_service), nb_aleatoire(1, 28), nb_aleatoire(1, 12), 2023);
        date_set_date(&(machines[i]->date_maintenance), nb_aleatoire(1, 28), nb_aleatoire(1, 12), 2023);
    }
}