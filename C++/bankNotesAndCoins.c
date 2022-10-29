#include <stdio.h>
int main(){
    double notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
    double value;
    scanf("%lf", &value);
    printf("NOTAS:\n");
    for (int i=0; i<6; i++){
        int cont=0;
        while(value >= notes[i]){
            cont++;
            value-=notes[i];
        }
        printf("%d nota(s) de R$ %.2lf\n", cont, notes[i]);
    }
    printf("MOEDAS:\n");
    for (int i=0; i<6; i++){
        int cont=0;
        while(value >= coins[i]){
            value-=coins[i];
            cont++;
        }
        printf("%d moeda(s) de R$ %.2lf\n", cont, coins[i]);
    }
    return 0;
}
