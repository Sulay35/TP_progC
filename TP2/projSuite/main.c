#include <stdio.h>
#include <math.h>

double suite(int n, int verbose){
    double r;
    if(n == 0){
        r = M_E - 1;
    }else if (n == 1){
        r = 1;
    }else{
        r = M_E - n*suite(n-1, verbose);
    }
    if(verbose){
        printf("I(%d)=%f\n",n,r);
    }
    return r;
}

double suiteDec(int n, int verbose){
    double r;
    if(n == 50){
        r = 0.0f;
    }else{
        r = (M_E - suiteDec(n+1, verbose))/(n+1);
    }
    if(verbose){
        printf("I(%d)=%f\n",n,r);
    }
    return r;
}

int main() {
    suiteDec(0,1);
    return 0;
}
