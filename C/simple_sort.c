#include <stdio.h>

int main(){
    int vet[3];
    int v, m;
    for (int i=0; i<3; i++){
        scanf("%d", &v);
        if (i==0){
            vet[i]=v;
        }else {
            for (int c=0; c<i; c++){
                if (v<vet[c]){
                    m=vet[c];
                    vet[c]=v;
                    vet[c+1]=m;
                }else if (v>vet[c]){
                    vet[i]=v;
                }
            }
        }
    }
    for (int i=0; i<3; i++){
        printf("%d\n", vet[i]);

    }
    return 0;
}
