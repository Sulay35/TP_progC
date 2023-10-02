/*
// Created by aysul on 02/10/23.
*/
#include <stdio.h>
#include "tache.h"

FILE * f;
void saisieTache(Tache *t){
    int i;

    printf("Entrez les valeurs :\n");
    scanf("%d %d %d", &(t->no), &(t->duree), &(t->nbPred));
    printf("Entrez les valeurs du tableau:\n");
    for (i=0; i<(t->nbPred) && i <NMAXPRED; i++){
        scanf("%d", (t->pred)+i);
    }
    printf("Entrez le titre:\n");
    scanf("%s", t->titre);

}

void afficheTache(Tache t){
    int i;
    printf("Tache n°%d:\nTitre : %s\nDuree : %d\n", t.no ,t.titre, t.duree);
    printf("Predecesseur : \n");

    for(i =0; i<t.nbPred; i++){
        printf("%d \n", t.pred[i]);
    }
}

int lireTachesFichier(char * nomFichier, Tache * tab_t){
    int i;
    int j=0;
    if((f = fopen(nomFichier,"r")) == (FILE *) NULL){
        printf("Erreur d'ouverture du fichier %s\n", nomFichier);
        exit(567);
    }
    char s[256];
    Tache t_tmp;
    while(!feof(f)){
        //fgets(s, 256, f);
        fscanf(f,"%d %d %d", &(t_tmp.no), &(t_tmp.duree), &(t_tmp.nbPred));
        for(i=0; i<t_tmp.nbPred; i++) {
            fscanf(f, "%d", t_tmp.pred + i);
        }
        fscanf(f,"%s", t_tmp.titre);
        tab_t[j]=t_tmp;
        j++;
    }
    fclose(f);

    return j+1;
}

void afficheTabTaches(Tache *tab_t, int nbtaches){
    int i;
    for(i=0; i <nbtaches; i++){
        afficheTache(tab_t[i]);
    }
}

