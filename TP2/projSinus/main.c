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
        res = 1.0f;
    else {
        int i;
        for (i = 1; i < n; i++) {
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
    double res=0.0f;
    for(i=0; i<=n; i++){
        res += puissance((-1),i)*terme(x,2*i+1);
    }
    return res;
}

double suiv(double t, double x, int n){
    if (n==0) return 0;
    if (n==1) return x;
    return t * (puissance(x,2)/(n*(n-1)));
}

double suivR(double x, int n){
    if(n <= 0){
       return x;
    }else if(n == 1) {
        return x;
    }
    return suivR(x, n-2) * (puissance(x,2)/(n*(n-1)));
}

double sinus2(double x, int n){
    int i = 1;
    double res = x;
    double t = x;

    if (n==1) return x;
    while(i<n+1){
        i+=2;
        res += puissance(-1.0f, (i-1)/2) * suiv(t,x,i);
        t = suiv(t,x,i);

    }
    return res;
}

int main()
{
     int i;
     for(i=1; i<=41; i+=2){
         printf("sinus(PI/2) au rang %d = %g\n", i, sinus(M_PI/2,i));
     }
     printf("sin(PI/2)=%g\n",sin(M_PI/2));
     printf("sin(PI/2)=%g\n",sinus(M_PI/2,1));
    for(i=1; i<=41; i+=2){
        printf("sinus2(PI/2, %d)=%g\n", i, sinus2(M_PI/2,i));
    }
     return EXIT_SUCCESS;
}

/*
 * double r = 0.0f;
    int i;
    for(i = 0; i < n; i++){
        r += puissance(-1, i) * suivR(x, i);
    }
    return r;
 */