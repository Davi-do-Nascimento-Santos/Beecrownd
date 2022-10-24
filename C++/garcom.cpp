#include <iostream>
using namespace std;
int main(){
    int num, cont=0;
    cin >> num;
    for (int i=0; i<num; i++){
        int latas, copos;
        cin >> latas >> copos;
        if (latas > copos){
            cont+=copos;
        }
    }
    cout << cont << endl;
    return 0;
}
