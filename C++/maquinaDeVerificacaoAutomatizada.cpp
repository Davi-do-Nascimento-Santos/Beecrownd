#include <iostream>
using namespace std;

bool verifica(int conect1[5], int conect2[5]){
    int iguais = 0;
    for (int i=0; i<5; i++){
        if (conect1[i] == conect2[i] && conect1[i] != 0){
            return false;
        }
        if (conect1[i] == conect2[i] && conect1[i] == 0){
            iguais++;
        }
    }
    if (iguais == 5){
        return false;
    }
    return true;
}

int main(){
    int conect1[5], conect2[5];
    for (int i=0; i<5; i++){
        cin >> conect1[i];
    }
    for (int i=0; i<5; i++){
        cin >> conect2[i];
    }
    if (verifica(conect1, conect2)){
        cout << "Y\n";
    }else {
        cout << "N\n";
    }
    return 0;
}
