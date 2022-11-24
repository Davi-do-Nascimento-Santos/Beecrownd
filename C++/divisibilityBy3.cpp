#include <iostream>
using namespace std;
int main(){
    int num, quant;
    while(cin >> quant >> num){
        int digito, cont=0;
        for (int i=0; i<quant; i++){
            cont+= num%10;
            num = num/10;
        }
        if (cont % 3 == 0){
            cout << cont << " sim" << endl;
        }else{
            cout << cont << " nao" << endl;
        }
    }
    return 0;
}
