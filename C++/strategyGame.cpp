#include <iostream>
using namespace std;
int main(){
    int players, rounds, num;
    cin >> players >> rounds;
    int matriz[rounds][players];
    for (int i=0; i<rounds; i++){
        for (int c=0; c<players; c++){
            cin >> matriz[i][c];
        }
    }
    int maior, posi;
    for (int i=0; i<players; i++){
        int cont=0;
        for (int c=0; c<rounds; c++){
            cont += matriz[c][i];
        }
        if (i==0){
            maior = cont;
            posi = i+1;
        }else if (cont >= maior){
            maior = cont;
            posi = i+1;
        }
    }
    cout << posi << endl;
    return 0;
}
