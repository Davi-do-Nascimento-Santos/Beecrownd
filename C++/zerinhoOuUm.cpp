#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        if (a == b && a != c){
            cout << "C\n";
        }else if(b == c && a != b){
            cout << "A\n";
        }else if (a == c && b != a){
            cout << "B\n";
        }else if ( a == b && a == c){ 
            cout << "*\n";
        }
    }
    return 0;
}
