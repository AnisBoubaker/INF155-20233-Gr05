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


/*
Identifie toutes les machines qui doivent subir une opération de maintenance.
Ces machines sont celles dont la date de dernière maintenance est nulle (0-0-0)
ou celles dont la date de dernière maintenance est antérieure à une date_min.
ENTREES:
- liste_machines: Tableau de références des machines du parc
- nb_machines: nombre de machines dans le tableau liste_machines
- date_min: Date minimale
SORTIE:
Tableau dynamique de références vers des machines qui doivent être maintenues.
*/
t_machine** machines_a_maintenir(t_machine* liste_machines[], int nb_machines, t_date date_min, int* nb_a_maintenir)
{
    t_machine** a_maintenir;
    t_machine** tmp;

    *nb_a_maintenir = 0;

    a_maintenir = (t_machine**)malloc(sizeof(t_machine*)*nb_machines);
    if(a_maintenir == NULL)
    {
        return NULL;
    }

    for(int i=0; i<nb_machines; i++)
    {
        if( date_cmp(liste_machines[i]->date_maintenance, date_min) < 0 )
        {
            a_maintenir[ *nb_a_maintenir ] = liste_machines[i];
            (*nb_a_maintenir)++;
        }
    }

    tmp = (t_machine**)realloc(a_maintenir, sizeof(t_machine*) * *nb_a_maintenir );
    if(tmp == NULL)
    {
        return a_maintenir;
    }
    a_maintenir = tmp;

    return a_maintenir;
}

