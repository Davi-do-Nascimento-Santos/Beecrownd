#include <iostream>
using namespace std;
int main(){
    string cpf;
    while(cin >> cpf){
        int numbers[11], cont=0, contNum=0;
        while (1){
            if (cpf[cont] == '\0'){
                break;
            }
            if (cpf[cont] != '.' && cpf[cont] != '-'){
                switch(cpf[cont]){
                    case '1':
                        numbers[contNum] = 1;
                        contNum++;
                        break;    
                    case '2':
                        numbers[contNum] = 2;
                        contNum++;
                        break;
                    case '3':
                        numbers[contNum] = 3;
                        contNum++;
                        break;
                    case '4':
                        numbers[contNum] = 4;
                        contNum++;
                        break;
                    case '5':
                        numbers[contNum] = 5;
                        contNum++;
                        break;
                    case '6':
                        numbers[contNum] = 6;
                        contNum++;
                        break;
                    case '7':
                        numbers[contNum] = 7;
                        contNum++;
                        break;
                    case '8':
                        numbers[contNum] = 8;
                        contNum++;
                        break;
                    case '9':
                        numbers[contNum] = 9;
                        contNum++;
                        break;
                    case '0':
                        numbers[contNum] = 0;
                        contNum++;
                        break;
                    default:
                        break;
                }
            }
            cont++;
        }
        int sum1=0;
        for (int i=1; i<=9; i++){
            int multi;
            multi = numbers[i-1] * i;
            sum1+=multi;
        }
        int sum2=0, posi=0;
        for (int i=9; i>=1; i--){
            int multi;
            multi = numbers[posi] * i;
            sum2+=multi;
            posi++;
        }
        int b1, b2;
        if (sum1 % 11 == 10){
            b1 = 0;
        }else{
            b1 = sum1 % 11;
        }
        if (sum2 % 11 == 10){
            b2 = 0;
        }else{
            b2 = sum2 % 11;
        }
        if (b2 == numbers[10] && b1 == numbers[9]){
            cout << "CPF valido\n";
        }else{
            cout << "CPF invalido\n";
        }
    }
    return 0;
}
