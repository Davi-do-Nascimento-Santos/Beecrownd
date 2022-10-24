#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double menor, maior, nota, soma=0;
    for (int i=0; i<5; i++){
        cin >> nota;
        if (i==0){
            maior = nota;
            menor = nota;
        }else{
            if (nota<menor){
                menor = nota;
            }
            if (nota>maior){
                maior = nota;
            }
        }
        soma+=nota;
    }
    soma = soma- maior - menor;
    printf("%.1lf\n", soma);
    return 0;
}
