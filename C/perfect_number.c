#include <stdio.h>
int main(){
    int v, n;
    scanf("%d", &v);
    for (int i=1; i<= v; i++){
        int cont=0;
        scanf("%d", &n);
        for (int c=1; c<n; c++){
            if (n%c==0){
                cont+=c;
            }
        }
        if (cont==n){
            printf("%d eh perfeito\n", n);
        }else{
            printf("%d nao eh perfeito\n", n);    
        }
    }
    return 0;
}
