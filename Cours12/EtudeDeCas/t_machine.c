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
        machines[i]->categorie = nb_aleatoire(0, 4);
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

tab_ref_machines_2d machine_classer_categories(const t_machine* liste_machines[], int nb_machines)
{
    tab_ref_machines_2d tab;
    int compteurs_par_cat[5] = {0};

    tab = (t_machine***)malloc(sizeof(t_machine**)*5);
    if(tab == NULL)
    {
        return NULL;
    }
    for(int i=0; i<5; i++)
    {
        //tab[i] = (t_machine**)malloc(100*sizeof(t_machine*));
        //On utilise calloc pour remplir le tableau de 0 (NULL) car on utilise
        //les valeurs NULL pour délimiter la fin de chaque ligne.
        tab[i] = (t_machine**)calloc(sizeof(t_machine*), 100);
        if(tab[i]==NULL)
        {
            for(int j=0; j<i; j++)
            {
                free(tab[j]);
            }
            free(tab);
            return NULL;
        }
    }

    for(int i=0; i<nb_machines; i++)
    {
        tab[ liste_machines[i]->categorie ][ compteurs_par_cat[liste_machines[i]->categorie]  ] = liste_machines[i];
        compteurs_par_cat[ liste_machines[i]->categorie ] ++;
    }

    return tab;
}

int machine_sauvegarder_machines(char* nom_fichier, const t_machine* liste_machines[], int nb_machines)
{
    FILE* le_fichier;

    le_fichier = fopen(nom_fichier, "w");
    if(le_fichier == NULL)
    {
        return 0;
    }

    fprintf(le_fichier , "%i\n", nb_machines);
    for(int i=0; i<nb_machines; i++)
    {
        fprintf(le_fichier, "%i %s %i %i %i %i %i %i\n",
                liste_machines[i]->num,
                liste_machines[i]->num_modele,
                liste_machines[i]->date_mise_service.jour,
                liste_machines[i]->date_mise_service.mois,
                liste_machines[i]->date_mise_service.annee,
                liste_machines[i]->date_maintenance.jour,
                liste_machines[i]->date_maintenance.mois,
                liste_machines[i]->date_maintenance.annee);
    }

    fclose(le_fichier);
    return 1;
}

/*
 * Écrire la fonction machine_charger_machines qui charge depuis le disque dur l’ensemble des
 * machines d’un fichier (dont le nom est reçu en paramètre) et retourne un tableau de références
 * vers les machines chargées.
 */

t_machine** machine_charger_machines(char* nom_fichier, int* nb_machines)
{
    FILE* le_fichier;
    t_machine** liste_machines;


    le_fichier = fopen(nom_fichier, "r");
    if(le_fichier == NULL)
    {
        return NULL;
    }

    //Je ne mets pas de & car nb_machines que je reçois en paramètre est déjà
    //une adresse.
    fscanf(le_fichier, "%i", nb_machines);

    liste_machines = (t_machine**)malloc(sizeof(t_machine*)* *nb_machines);
    if(liste_machines == NULL)
    {
        fclose(le_fichier);
        return NULL;
    }

    for(int i=0; i<*nb_machines; i++)
    {
        int num;
        char num_modele[20];
        fscanf(le_fichier, "%i %s", &num, num_modele);
        //On crée la machine et on met son adresse dans le tableau
        liste_machines[i] = machine_init(num, num_modele);
        if(liste_machines[i]==NULL)
        {
            //Ça n'a pas fonctionné pour la machine i
            //On libère d'abord toutes les machines qui ont bien été allouées
            //de 0 jusqu'à i
            for(int j=0; j<i; j++)
            {
                machine_free(liste_machines[j]);
            }
            //On libère le tableau de machines
            free(liste_machines);
            //On ferme le fichier
            fclose(le_fichier);

            return NULL;
        }

        fscanf(le_fichier, "%i %i %i %i %i %i",
               &(liste_machines[i]->date_mise_service.jour),
               &(liste_machines[i]->date_mise_service.mois),
               &(liste_machines[i]->date_mise_service.annee),
               &(liste_machines[i]->date_maintenance.jour),
               &(liste_machines[i]->date_maintenance.mois),
               &(liste_machines[i]->date_maintenance.annee));
    }

    fclose(le_fichier);
    return liste_machines;
}






























