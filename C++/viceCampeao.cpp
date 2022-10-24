#include <iostream>
using namespace std;
int main(){
    int ele[3], maior, sMaior, cont=0;
    for (int i=0; i<3; i++){
        cin >> ele[i];
    }
    for (int i=0; i<3; i++){
        if (cont==0){
            maior = ele[i];
        }else{
            if (ele[i] > maior){
                maior = ele[i];
            }
        }
        cont++;
    }
    cont=0;
    for (int i=0; i<3; i++){
        if (ele[i]<maior && cont==0){
            sMaior = ele[i];
        else {
            if (ele)[i]<maior && ele[i]>sMaior){
                sMaior = ele[i];
            }
        }
        cont++;
    }
    cout << maior << endl;
    return 0;
}
