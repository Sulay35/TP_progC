/*!
* \file main.c
* \brief Test du calcul de la factorielle
* \author
* \date
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
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

double puissance(double x, int n){
    double res = x;
    if(n == 0)
        res = 1;
    else {
        int i;
        for (i = 0; i < n; i++) {
            res *= x;
        }

    }
    return res;
}

double terme(double x, int n){
    return puissance(x, n)/myfact(n);
}
double sinus(double x, int n){
    int i;
    double res=0;
    for(i=0; i<=n; i++){
        res += puissance((-1),i)*terme(x,2*i+1);
    }
    return res;
}

double suiv(double t, double x, int n){

}

int main()
{
 int i;
 for(i=1; i<=41; i+=2){
     printf("sinus(PI/2) au rang %d = %g\n", i, sinus(M_PI/2,i));
 }
 printf("sin(PI/2)=%g\n",sin(M_PI/2));
    printf("sin(PI/2)=%g\n",sinus(M_PI/2,1));

    return EXIT_SUCCESS;
}