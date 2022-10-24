#include <iostream>
using namespace std;
int main(){
    int value, notes[] = {100, 50, 20, 10, 5, 2, 1};
    cin >> value;
    cout << value << endl;
    for (int i=0; i<7; i++){
        int cont=0;
        while(value >= notes[i]){
            value -= notes[i];
            cont++;
        }
        cout << cont << " nota(s) de R$ " << notes[i] << ",00\n";
    }
    return 0;
}
