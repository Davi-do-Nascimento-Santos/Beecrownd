#include <stdio.h>
int main(){
    int array[1000];
    int num;
    int cont=0;
    scanf("%d", &num);
    while(1) {
        for (int i=0; i<num; i++){
            array[cont]=i;
            printf("N[%d] = %d\n", cont, array[cont]);
            cont++;
            if (cont>999){
                break;
            }
        }
        if (cont>999){
            break;
        }
    }
    return 0;
}
