#include <iostream>
using namespace std;
void loteria(int nEscolhidos[6], int nSorteados[6]){
    int cont=0;
    for (int i=0; i<6; i++){
        for (int c=0; c<6; c++){
            if (nEscolhidos[i] == nSorteados[c]){
                cont++;
                break;
            }
        }
    }
    if (cont <3){
        cout << "azar" << endl;
    }else if (cont < 4){
        cout << "terno" << endl;
    }else if(cont <5){
        cout << "quadra" << endl;
    }else if (cont < 6){
        cout << "quina" << endl;
    }else {
        cout << "sena" << endl;
    }
}
int main(){
    int nEscolhidos[6], nSorteados[6];
    for (int i=0; i<6; i++){
        cin >> nEscolhidos[i];
    }
    for (int i=0; i<6; i++){
        cin >> nSorteados[i];
    }
    loteria(nEscolhidos, nSorteados);
    return 0;
}
