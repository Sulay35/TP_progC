#include <stdio.h>
#include <string.h>
#include "tache.h"

int main() {
    Tache tabTaches [MAXTACHES];
    int nbtaches = 0;
    char * nomF = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/taches.txt";
    char * nomFB = "/home/aysul/Documents/INSA/3INFO/progC/TPs/TP4/tachesB.txt";
    char * s1;
    char s2 []= " bonjour ";
    strcpy (s1 ,s2);
    /*Tache t1;
    saisieTache(&t1);
    afficheTache(t1);
*/

    nbtaches = lireTachesFichier(nomF, tabTaches);
    afficheTabTaches(tabTaches, nbtaches);
    printf("%d", somme_total_duree(tabTaches, nbtaches));

    ecrireTachesFichier(nomFB,tabTaches,nbtaches);
    return 0;
}
