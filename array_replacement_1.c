#include <stdio.h>
int main(){
    int x[10];
    int n;
    for (int i=0; i<=9; i++){
        scanf("%d", &n);
        if (n>0){
            x[i]=n;
        }else{
            x[i]=1;
        }
    }
    for (int c=0; c<=9; c++){
        printf("x[%d] = %d\n", c, x[c]);
    }
    return 0;
}
