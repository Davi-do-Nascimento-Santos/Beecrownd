#include <iostream>
using namespace std;
int main(){
    int part, folhas, quant;
    cin >> part >> folhas >> quant;
    if ((quant *  part) <= folhas){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
