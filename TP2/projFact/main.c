
/*!
* \file main.c
* \brief Test du calcul de la factorielle
* \author
* \date
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*! \func int myfact(int n)
 *
 * @param n l'entier dont on veut calculer la factorielle
 * @return la factorielle de n
 */
int myfact(int n) {
    int i = 1;
    int r = 1;
    for (i=1; i<=n; i++){
        r = r*i;
    }

    return r;
}
void display_fact(int n){
    int i;
    for(i=1; i <= n; i++){
        printf("%d! = %d\n", i, myfact(i));
    }
}

int rang(){
    int i=1;
    while(myfact(i)<=INT_MAX/(i+1)){
        i++;
    }
    return i;
}
int main()
{
    display_fact(20);
    printf("plus grande factorielle est : %d ", rang());
  return EXIT_SUCCESS;
}
/*
#include <stdio.h>
#include <math.h>

double suite(int n, int verbose){
    int r;
    if(n == 0){
        r = M_E - 1;
    }else if (n == 1){
        r = 1;
    }else{
        r = M_E - n*suite(n-1, verbose);
    }
    if(verbose){
        printf("I(%d)=%d\n",r);
    }
    return r;
}

int main() {
    printf("Hello, World!\n");
    suite(20,1);
    return 0;
}
*/
