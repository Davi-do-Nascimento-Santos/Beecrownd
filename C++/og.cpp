#include <iostream>
using namespace std;
int main(){
    do {
        int left, right, children;
        cin >> left >> right;
        if (left ==0 && right == 0){
            break;
        }
        children = left + right;
        cout << children << endl;
    } while(1);
    return 0;
}
