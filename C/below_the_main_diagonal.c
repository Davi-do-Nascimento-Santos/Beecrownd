#include <stdio.h>
int main(){
    double m[12][12], sum=0, num;
    char letra;
    scanf("%c", &letra);
    for (int i=0; i<12; i++){
        for (int c=0; c<12; c++){
            scanf("%lf", &m[i][c]);
            if (i>c){
                sum+=m[i][c];
            }
        }
    }
    if (letra=='S'){
        printf("%.1lf\n", sum);
    }else{
        printf("%.1lf\n", sum/66);
    }
    return 0;
}
