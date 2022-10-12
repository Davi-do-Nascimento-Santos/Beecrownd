#include <stdio.h>
int main(){
    double vector[100];
    double num;
    scanf("%lf", &num);
    for (int i=0; i<=99; i++){
        vector[i]=num;
        num /= 2;
    }
    for (int i=0; i<=99; i++){
        printf("N[%d] = %.4lf\n", i, vector[i]);
    }
    return 0;
}
