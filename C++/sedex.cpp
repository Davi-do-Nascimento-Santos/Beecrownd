#include <iostream>
using namespace std;
bool verifica(int diametro, int tam[3]){
    for (int i=0; i<3; i++){
        if (tam[i]<diametro){
            return false;
        }
    }
    return true;
}
int main(){
    int diametro;
    int tam[3];
    cin >> diametro;
    for (int i=0; i<3; i++){
        cin >> tam[i];
    }
    if (verifica(diametro, tam)){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
