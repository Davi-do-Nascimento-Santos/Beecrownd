#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        for (int w=0; w<2; w++){
            int cont=i;
            if (w==0){
                for (int c=1; c<=3; c++){
                    printf("%d", cont);
                    cont*=i;
                    if (c<3){
                        printf(" ");
                    }else{
                        printf("\n");
                    }
                }
            }else{
                for (int c=1; c<=3; c++){
                    if (c==1){
                        printf("%d", cont);
                    }else{
                        printf("%d", cont+1);
                    }
                    cont*=i;
                    if (c<3){
                        printf(" ");
                    }else{
                        printf("\n");
                    }
                }
            }
        }
    }
    return 0;
}
