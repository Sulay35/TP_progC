/*
// Created by aysul on 24/09/23.
*/

#ifndef PROJFACT_MAIN_RAND_A_H
#define PROJFACT_MAIN_RAND_A_H

#define DIM_TAB 20
#define VAL_MAX  10

void init_alea_tab(int * tab);

void affiche_tab(int * tab, int nb);

void affiche_histo(int * tab, int nb);

void histogramme(int * tab, int * histo, int nb);

void zeros(int * tab, int nb);

#endif /*PROJFACT_MAIN_RAND_A_H*/

