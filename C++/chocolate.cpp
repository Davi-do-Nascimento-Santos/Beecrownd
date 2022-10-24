#include <iostream>
using namespace std;
int main(){
    int num, sum=0, div;
    cin >> num;
    for (int i=0; i<num; i++){
        cin >> div;
        sum += div-1;
    }
    cout << sum << endl;
    return 0;
}
