#include <stdio.h>
int main(){
    int array[10];
    int num;
    scanf("%d", &num);
    for (int i=0; i<=9; i++){
        array[i]=num;
        num *= 2;
    }
    for (int i=0; i<=9; i++){
        printf("N[%d] = %d\n", i, array[i]);
    }
    return 0;
}
