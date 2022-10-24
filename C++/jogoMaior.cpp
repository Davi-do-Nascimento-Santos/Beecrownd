#include <iostream>
using namespace std;
int main(){
    do{
        int vezes, contA=0, contB=0, a, b;
        cin >> vezes;
        if (vezes == 0){
            break;
        }
        for (int i=0; i<vezes; i++){
            cin >> a >> b;
            if (a > b){
                contA++;
            }else if (a < b){
                contB++;
            }
        }
        cout << contA << " " << contB << endl;
    }while(1);  
    return 0;
}
