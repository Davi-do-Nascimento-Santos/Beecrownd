#include <stdio.h>
int main(){
    int v;
    scanf("%d", &v);
    for (int i=1; i<=v; i++){
        int n, cont=0;
        scanf("%d", &n);
        for (int c=1; c<=n; c++){
            if (n%c==0){
                cont++;
            }
        }
        if (cont==2){
            printf("%d eh primo\n", n);
        }else {
            printf("%d nao eh primo\n", n);
        }
    }
    return 0;
}
