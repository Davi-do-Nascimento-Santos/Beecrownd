#include <iostream>
using namespace std;
int main(){
    int intervalos;
    cin >> intervalos;
    int matriz[intervalos][2];
    for (int i=0; i<intervalos; i++){
        for (int c=0; c<2; c++){
            cin >> matriz[i][c];
        }
    }
    int km=0;
    for (int i=0; i<intervalos; i++){
        int mult;
        mult = matriz[i][0] * matriz[i][1];
        km += mult;
    }
    cout << km << endl;
    return 0;
}
