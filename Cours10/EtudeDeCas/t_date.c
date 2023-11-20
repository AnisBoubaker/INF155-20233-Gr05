//
// Created by Anis Boubaker on 2023-11-20.
//

#include "t_date.h"


/*************** FONCTIONS PRIVEES DU MODULE *****************/
/*
 * Les années sont bissextiles si elle est:
    - Divisible par 4 mais pas par 100
    OU
    - Divisble par 400.
    retourne une valeur vraie si l'année est bissextile, fausse sinon.
 */
int est_bissextile(int annee);

/*
 * Retourne le nombre maximal de jours pour un mois donné. Par exemple, pour JANVIER: 31
 * retourn -1 si le mois reçu est erroné.
 */
int max_jours_mois(e_mois mois, int annee);



/*
Fonction qui compare deux dates
ENTREES:
date1: première date à comparer
date2: seconde date à comparer SORTIE(int):
>0 si date1 est plus récente que date2
<0 si date1 est antérieure à date2
0 si date1 et date2 sont identiques.
*/
int date_cmp(t_date date1, t_date date2)
{
    if(date1.annee != date2.annee)
    {
        return date1.annee - date2.annee;
    }
    if(date1.mois != date2.mois)
    {
        return date1.mois - date2.mois;
    }
    return date1.jour - date2.jour;
}

/*
 * Les années sont bissextiles si elle est:
    - Divisible par 4 mais pas par 100
    OU
    - Divisble par 400.
    retourne une valeur vraie si l'année est bissextile, fausse sinon.
 */
int est_bissextile(int annee)
{
    if(annee % 4 == 0 && annee % 100 !=0){
        return 1;
    }
    if(annee % 400 == 0)
        return 1;
    return 0;
}

/*
 * Retourne le nombre maximal de jours pour un mois donné. Par exemple, pour JANVIER: 31
 * retourn -1 si le mois reçu est erroné.
 */
int max_jours_mois(e_mois mois, int annee)
{
    switch(mois)
    {
        case JANVIER:
        case MARS:
        case MAI:
        case JUILLET:
        case AOUT:
        case OCTOBRE:
        case DECEMBRE:
            return 31;
        case AVRIL:
        case JUIN:
        case SEPTEMBRE:
        case NOVEMBRE:
            return 30;
        case FEVRIER:
            return est_bissextile(annee) ? 29 : 28;
    }
    return -1;
}

int date_set_date(t_date* date, int jour, e_mois mois, int annee)
{
    int max_jour = max_jours_mois(mois, annee);
    if(max_jour == -1)
    { //Le mois reçu est invalide
        return 0;
    }
    if(jour<1 || jour>max_jour)
    { //Le jour est invalide
        return 0;
    }

    //(*date).jour = jour;
    date->jour = jour;
    //(*date).mois = mois;
    date->mois = mois;
    //(*date).annee = annee;
    date->annee = annee;

    return 1;
}

