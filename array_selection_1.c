#include <stdio.h>
int main(){
    double a[100];
    for (int i=0; i<=99; i++){
        scanf("%lf", &a[i]);
    }
    for (int c=0; c<=99; c++){
        if (a[c] <= 10){
            printf("A[%d] = %.1lf\n", c, a[c]);
        }
    }
    return 0;
}
