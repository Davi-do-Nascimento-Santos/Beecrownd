#include <iostream>
using namespace std;
int main(){
    int a[4];
    char c1, c2, c3;
    cin >> a[0] >> c1 >> a[1] >> c2 >> a[2] >> c3 >> a[3];
    for (int i=0; i<4; i++){
        cout << a[i] << endl; 
    }
    return 0;
}
