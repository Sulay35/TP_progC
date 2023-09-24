#include <stdio.h>
#include <math.h>

int norme(int x1, int x2, int y1, int y2){
    return sqrt((x1-y1)*(x1-y1) + (x2-y2)*(x2-y2));
}

int main(int argc, char * argv[]) {
    int y1, y2, p;
    printf("coordonnées : \n");
    scanf("%d %d", &y1, &y2);
    p = norme(0,0, y1, y2);

    printf("resultat : %d", p);
    return 0;
}
