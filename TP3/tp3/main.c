#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "tableau.h"
#include "chaines.h"

int main()
{
    int exo;
    printf("exo n [1/2] : ");
    scanf("%d", &exo);
    printf("\n");

    if(exo == 1){
        int histo[VAL_MAX];
        int tab[DIM_TAB];
        srand(time(NULL));

        init_alea_tab(tab);
        affiche_tab(tab, DIM_TAB);

        zeros(histo, VAL_MAX);
        histogramme(tab, histo, DIM_TAB);
        affiche_histo(histo, VAL_MAX);

    }else{
        char nom[MAX_NOM];
        char prenom[MAX_NOM];
        char id[MAX_ID+1];
        char id2[MAX_ID+1];

        saisie_nom_prenom(nom, prenom);

        id_from_nom_prenom(nom,prenom, id);

        printf("id1 : %s\n", id);

        id_from_nom_prenom_low(nom,prenom, id2);
        printf("id2 : %s\n", id2);

    }


    return 0;
}
