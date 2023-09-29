/*
// Created by aysul on 25/09/23.
*/

#include "chaines.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void saisie_nom_prenom(char * nom, char * prenom){
    printf("prenom : ");
    scanf("%s", prenom);
    printf("nom : ");
    scanf("%s", nom);
    printf("Bonjour %s %s !\n", prenom, nom);
}
/*
 * Génère un identifiant de taille MAX_ID à partir du nom et du prénom
 */
char* id_from_nom_prenom(char* nom, char* prenom, char * id){
    id[0] = prenom[0];
    strncat(id,nom, MAX_ID-1);
    return id;
}

char* id_from_nom_prenom_low(char* nom, char* prenom, char * id){

    int i;
    char t[MAX_ID];
    i=0;

    while(i < MAX_ID-1){
        t[i] = tolower((unsigned char) nom[i]);
        i++;
    }

    id[0] = tolower((unsigned char) prenom[0]);

    strncat(id,t, MAX_ID-1);

    return id;
}
