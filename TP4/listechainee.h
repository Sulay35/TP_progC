/*
// Created by aysul on 19/10/23.
*/
#include "tache.h"
#ifndef TP4_LISTECHAINEE_H
#define TP4_LISTECHAINEE_H

typedef struct struct_element {
    Tache t;
    struct struct_element * suivant;
}Element;

typedef Element * Liste;
void afficheListe(Liste* l);
void ajoutdeb(Liste* l, Tache t);
int nbelement(Liste* l);
void ajoutTri(Liste *l, Tache t);
void ajouttrie(Liste *l, Tache t, int (*ptrfonc)(Tache, Tache));
#endif /*TP4_LISTECHAINEE_H*/
