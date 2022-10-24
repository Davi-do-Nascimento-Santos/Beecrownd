#include <iostream>
using namespace std;
int main(){
    int quant, conta=0;
    cin >> quant;
    for (int i=0; i<=quant; i++){
        if (i<=10){
            conta = 7;
        }else if(i<=30){
            conta++;
        }else if(i<=100){
            conta+=2;
        }else{
            conta+=5;
        }
    }
    cout << conta << endl;
    return 0;
}
