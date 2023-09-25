/*
// Created by aysul on 24/09/23.
*/

#include "tableau.h"
#include <stdio.h>
#include <stdlib.h>

void init_alea_tab(int * tab){
    int i;
    for(i = 0; i < DIM_TAB; i++){
        tab[i] = rand() % VAL_MAX;
    }
}

void affiche_tab(int * tab, int nb){
    int i;
    for(i = 0; i < nb; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void affiche_histo(int * tab, int nb){
    int i;
    int j;
    for(i = 0; i < nb; i++){
        printf("%d : ", i);
        for(j = 0; j < tab[i]; j++){
            printf(" - ");
        }
        printf(" %d \n",tab[i]);
    }
}
void histogramme(int * tab, int * histo, int nb){
    int i;
    for(i = 0; i < nb; i++){
       int a = tab[i];
       histo[a] = histo[a]+1;
    }
}

void zeros(int * tab, int nb){
    int i;
    for(i = 0; i < nb; i++){
        tab[i] = 0;
    }
}
