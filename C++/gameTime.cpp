#include <iostream>
using namespace std;
int main(){
    int ini, fim, hour;
    cin >> ini >> fim;
    if (ini == fim){
        hour = 24;
    }else if(ini < fim){
        hour = fim - ini;
    }else {
        hour = 24 - ini + fim;
    }
    cout << "O JOGO DUROU " << hour << " HORAS(S)\n";
    return 0;
}
