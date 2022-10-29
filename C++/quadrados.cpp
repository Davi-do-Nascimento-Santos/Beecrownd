#include <stdio.h>
//using namespace std;
int main(){
    int tam;
    scanf("%d", &tam);
    int mat[tam][tam];
    for (int i=0; i<tam; i++){
        for (int c=0; c<tam; c++){
            scanf("%d", &mat[i][c]);
        }
    }
    int sumIni=0, sumMuda=0;
    for (int i=0; i<tam; i++){
        for (int c=0; c<tam; c++){
            sumMuda+= mat[i][c];
        }
        if (i == 0){
            sumIni = sumMuda;
        }
        if (sumMuda != sumIni){
            printf("-1\n");
            return 0;
        }
        sumMuda=0;
    }
    for (int i=0; i<tam; i++){
        for (int c=0; c<tam; c++){
            sumMuda+= mat[c][i];
        }
        if (sumMuda != sumIni){
            printf("-1\n");
            return 0;
        }
        sumMuda=0;
    }
    for (int i=0; i<tam; i++){
        for (int c=0; c<tam; c++){
            if (i==c){
                sumMuda+= mat[i][c];
            }
        }
        if (sumMuda != sumIni){
            printf("-1\n");
        }
        sumMuda=0;
    }
    for (int i=tam-1; i>=0; i--
    printf("%d\n", sumIni);
    return 0;
}
