#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    for (int i=1; i<=num; i++){
        cout << "Ho";
        if (i<num){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    return 0;
}
