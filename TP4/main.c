#include <stdio.h>
#include <string.h>
#include "listechainee.h"


int main(void) {

    FILE *f;
    int i; Tache t_tmp;
    int j=0; char s[64];
    int nbTaches = 0;
    int nbElems = 0;
    char * nomFDyn = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/tachesDyn.txt";
    char * nomF = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/taches.txt";

    Liste liste; /* Element * */
    liste = NULL;

    if((f = fopen(nomF,"r")) == (FILE *) NULL){
        printf("Erreur d'ouverture du fichier %s\n", nomF);
        exit(567);
    }
    while(!feof(f)){
        fscanf(f,"%d %d %d", &(t_tmp.no), &(t_tmp.duree), &(t_tmp.nbPred));
        for(i=0; i<t_tmp.nbPred; i++) {
            fscanf(f, "%d", t_tmp.pred + i);
        }
        fgets(s, 64, f);
        strncpy(t_tmp.titre,s, strlen(s) -1);

        ajoutdeb(&liste,t_tmp);
    }
    fclose(f);

    /*nbElems = nbelement(&liste);
    printf("Nb elements : %d", nbElems);*/

    afficheListe(&liste);
    return 0;

    /* TP4 */
    /*
   Tache * tabDyn = lireTachesFichierDyn(nomFDyn, &nbTaches);
   afficheTabTaches(tabDyn, nbTaches);
   free(tabDyn);
   */

/*
    Tache tabTaches [MAXTACHES];
    int nbtaches = 0;
    char * nomF = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/taches.txt";
    char * nomFB = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/tachesB.txt";

    Tache t1;
    saisieTache(&t1);
    afficheTache(t1);

    nbtaches = lireTachesFichier(nomF, tabTaches);
    afficheTabTaches(tabTaches, nbtaches);
    printf("%d", somme_total_duree(tabTaches, nbtaches));

    ecrireTachesFichier(nomFB,tabTaches,nbtaches);
      */
}
