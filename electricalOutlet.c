#include <stdio.h>
#define TAM 4
int tomadas(int vet[TAM]){
    int sum=0;
    for (int i=0; i<TAM; i++){
        if (i==0){
            sum+=vet[i];
        }else{
            sum+=vet[i]-1;
        }
    }
    return sum;
}

int main(){
    int vet[TAM];
    for (int i=0; i<TAM; i++){
        scanf("%d", &vet[i]);
    }
    printf("%d\n", tomadas(vet));   
    return 0;
}
