#include <iostream>
using namespace std;
int main(){
    int colocacao, top;
    cin >> colocacao;
    if (colocacao == 1){
        top = 1;
    }else if (colocacao <=3){
        top = 3;
    }else if (colocacao <= 5){
        top = 5;
    }else if (colocacao <= 10){
        top = 10;
    }else if (colocacao <= 25){
        top = 25;
    }else if (colocacao <= 50){
        top = 50;
    }else{
        top = 100;
    }
    cout << "Top " << top << endl;
    return 0;
}
