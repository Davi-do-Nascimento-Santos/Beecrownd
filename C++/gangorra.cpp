#include <iostream>
using namespace std;
int main(){
    int p1, p2, c1, c2, result;
    cin >> p1 >> c1 >> p2 >> c2;
    result = p1 * c1 - p2 * c2;
    if (result == 0){
        cout << result  << endl;
    }else if(result>0){
        cout << -1 << endl;
    }else{
        cout << 1 << endl;
    }
    return 0;
}
