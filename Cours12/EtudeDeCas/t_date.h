//
// Created by Anis Boubaker on 2023-11-20.
//

#ifndef ETUDEDECAS_T_DATE_H
#define ETUDEDECAS_T_DATE_H


typedef enum mois{
    JANVIER=1, FEVRIER, MARS, AVRIL, MAI, JUIN, JUILLET, AOUT, SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE
} e_mois;

typedef struct t_date {
    int jour;
    e_mois mois;
    int annee;
} t_date;


/*
Fonction qui compare deux dates
ENTREES:
date1: première date à comparer
date2: seconde date à comparer SORTIE(int):
>0 si date1 est plus récente que date2
<0 si date1 est antérieure à date2
0 si date1 et date2 sont identiques.
*/
int date_cmp(t_date date1, t_date date2);


/*
Retourne une date dont les composantes sont reçues en paramètre. La fonction vérifie
 la validité de la date: les jours ne peuvent être <1 ou >31, en s'assurant que ça correspondent au mois.
 Les années sont bissextiles si elle est:
    - Divisible par 4 mais pas par 100
    OU
    - Divisble par 400.
ENTREES:
- date: Référence vers la date à définir
- Les composantes d'une date: jour, mois et année
SORTIE:
Valeur vraie si la date a bien été modifiée, valeur fausse sinon (en cas d'erreur)
*/
int date_set_date(t_date* date, int jour, e_mois mois, int annee);


#endif //ETUDEDECAS_T_DATE_H
