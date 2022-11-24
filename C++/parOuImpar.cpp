#include <iostream>
using namespace std;
int main(){
    int cont=1;
    while(1){
        int num;
        cin >> num;
        if (num == 0){
            break;
        }
        int p1, p2;
        string player1, player2;
        cin >> player1;
        cin >> player2;
        cout << "Teste" << cont << endl;
        for (int i=0; i<num; i++){
            cin >> p1 >> p2;
            if ((p1 + p2) % 2 == 0){
                cout << player1 << endl;
            }else{
                cout << player2 << endl;
            }
        }
        cont++;
    }
    return 0;
}
