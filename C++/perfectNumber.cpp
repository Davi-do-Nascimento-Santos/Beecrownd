#include <iostream>
using namespace std;
int main(){
    int vezes;
    cin >> vezes;
    for (int i=0; i<vezes; i++){
        int num, sum=0;
        cin >> num;
        for (int i=1; i<num; i++){
            if (num%i==0){
                sum+=i;
            }
        }
        if (sum == num){
            cout << num << " eh perfeito" << endl;
        }else {
            cout << num << " nao eh perfeito" << endl;
        }
    }
    return 0;
}
