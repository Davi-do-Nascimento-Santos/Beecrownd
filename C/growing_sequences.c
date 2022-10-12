#include <stdio.h>

int main(){
    int n;
    do {
        scanf("%d", &n);
        if (n==0){
            break;
        }
        for (int i=1; i<=n; i++){
            printf("%d", i);
            if (i<n){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }while(1);
    




    return 0;
}
