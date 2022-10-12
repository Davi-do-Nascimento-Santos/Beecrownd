#include <stdio.h>
void notaEsquecida(int *nota1, int *nota2, int *media){
    *nota2 = (*media * 2) - *nota1;
}

int main(){
    int nota1, nota2, media;
    scanf("%d", &nota1);
    scanf("%d", &media);
    notaEsquecida(&nota1, &nota2, &media);
    printf("%d\n", nota2);
    return 0;
}
