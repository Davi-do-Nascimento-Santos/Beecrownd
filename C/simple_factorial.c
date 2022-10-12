#include <stdio.h>
int main(){
    int n, cont=1;
    scanf("%d", &n);
    for (n; n>=1; n--){
        cont *=n;   
    }
    printf("%d\n", cont);
    return 0;
}
