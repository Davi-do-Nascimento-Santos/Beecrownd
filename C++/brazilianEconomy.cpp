#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    int answer, contOne=0, contZero=0;
    for (int i=0; i<num; i++){
        cin >> answer;
        if (answer == 1){
            contOne++;
        }else{
            contZero++;
        }
    }
    if (contZero > contOne){
        cout << "Y\n";
    }else{
        cout << "N\n";
    }
    return 0;
}
