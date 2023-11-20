//
// Created by Anis Boubaker on 2023-11-20.
//

#include "t_date.h"

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