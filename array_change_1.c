#include <stdio.h>
int main(){
    int array[20];
    for (int i=19; i>=0; i--){
        scanf("%d", &array[i]);
    }
    for (int i=0; i<=19; i++){
        printf("N[%d] = %d\n", i, array[i]);
    }
    return 0;
}
