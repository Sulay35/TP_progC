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
