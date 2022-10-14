#include <iostream>
using namespace std;
int main(){
    int n, bigger, cont=0;
    while (1){
        cin >> n;
        if (cont == 0){
            bigger = n;
        }else {
            if (n > bigger){
                bigger = n;
            }
        }
        if (n == 0){
            break;
        }
        cont++;
    }
    cout << bigger << endl;
    return 0;
}
