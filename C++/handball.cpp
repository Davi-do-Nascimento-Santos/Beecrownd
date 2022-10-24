#include <iostream>
using namespace std;
int main(){
    int players, matches;
    cin >> players && cin >> matches;
    int cont=0;
    int col[players][matches];
    for (int i=0; i<players; i++){
        int vezes=0;
        for (int c=0; c<matches; c++){
            cin >> col[i][c];
        }
        for (int c=0; c<matches; c++){
            if (col[i][c]>0){
                vezes++;
            }
        }
        if(vezes==matches){
            cont++;
        } 
    }
    cout << cont << endl;
    return 0;
}
