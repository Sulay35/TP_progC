/*
// Created by aysul on 19/10/23.
*/

#include "listechainee.h"

void ajoutdeb(Liste* l, Tache t){
    Element *nouvelElement = malloc(sizeof (Element));
    nouvelElement->t = t;
    nouvelElement->suivant = *l;
    *l = nouvelElement;
}

void afficheListe(Liste* l){
    Element* ec;
    ec = l[0];
    while (ec->suivant != NULL){
        afficheTache(ec->t);
        ec = ec->suivant;
    }
}

void ajoutTri(Liste *l, Tache t){
    Element *nouvelElement = malloc(sizeof (Element));
    Element* ec;
    ec = l[0];

    nouvelElement->t = t;

    while (ec->suivant != NULL){
       if (ec->t.no >= t.no) {
           nouvelElement->suivant = ec->suivant;
           ec->suivant = nouvelElement;
           break;
       }
       ec = ec->suivant;
    }
}

void ajouttrie(Liste *l, Tache t, int (*ptrfonc)(Tache, Tache)){
    Element *nouvelElement = malloc(sizeof (Element));
    Element* ec;
    ec = l[0];
    nouvelElement->t = t;
    while (ec->suivant != NULL){
        if (ptrfonc(ec->t, t) < 0) {
            nouvelElement->suivant = ec->suivant;
            ec->suivant = nouvelElement;
            break;
        }
        ec = ec->suivant;
    }
}

int compNo(Tache t1, Tache t2){
    return t1.no - t2.no;
}

int compDuree(Tache t1, Tache t2){
    return t1.duree - t2.duree;
}

int compDuree(Tache t1, Tache t2){
    return t1.duree - t2.duree;
}