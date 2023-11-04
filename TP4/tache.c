/*
// Created by aysul on 02/10/23.
*/
#include <stdio.h>
#include <string.h>
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
    int i; Tache t_tmp;
    int j=0; char s[64];
    if((f = fopen(nomFichier,"r")) == (FILE *) NULL){
        printf("Erreur d'ouverture du fichier %s\n", nomFichier);
        exit(567);
    }


    while(!feof(f)){
        fscanf(f,"%d %d %d", &(t_tmp.no), &(t_tmp.duree), &(t_tmp.nbPred));
        for(i=0; i<t_tmp.nbPred; i++) {
            fscanf(f, "%d", t_tmp.pred + i);
        }
        fgets(s, 64, f);
        strncpy(t_tmp.titre,s, strlen(s) -1);
        tab_t[j++]=t_tmp;
    }
    fclose(f);

    return j+1;
}

void afficheTabTaches(Tache *tab_t, int nbtaches){
    int i;
    for(i=0; i <nbtaches; i++){
        afficheTache(tab_t[i]);
        printf("\n");
    }

}

int somme_total_duree (Tache *tab, int nbTaches){
    int i;
    int res = 0;
    for(i=0; i<nbTaches; i++){
        res += tab[i].duree;
    }
    return res;
}

int ecrireTachesFichier(char * nomFichier, Tache * tab_t, int nbTaches){
    int i,j;
    if((f = fopen(nomFichier,"w")) == (FILE *) NULL){
        printf("Erreur d'ouverture du fichier %s\n", nomFichier);
        return 0;
    }


    for(i=0; i <nbTaches; i++){
        fprintf(f,"%d %d %d", tab_t[i].no, tab_t[i].duree, tab_t[i].nbPred);
        for(j=0; j<tab_t[i].nbPred;j++){
            fprintf(f," %d", tab_t[i].pred[j]);
        }
        fprintf(f, " %s\n", tab_t[i].titre);
    }
    fclose(f);
    return 1;
}


Tache * lireTachesFichierDyn(char * nomFichier, int * nbTaches){
    Tache * tabDyn;
    if((f = fopen(nomFichier,"r")) == (FILE *) NULL){
        printf("Erreur d'ouverture du fichier %s\n", nomFichier);
        exit(567);
    }
    fscanf(f,"%d", nbTaches);

    /*printf("nbTaches : %d\n", *nbTaches);*/
    printf("s:%ld", sizeof(Tache));
    fclose(f);

    if((tabDyn = (Tache *) malloc(*nbTaches)) == NULL){
        printf("Probleme alloc mem\n");
        exit(43567);
    }
    *nbTaches = lireTachesFichier(nomFichier, tabDyn);
    return tabDyn;
}



