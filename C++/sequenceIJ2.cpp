#include <iostream>
using namespace std;
int main(){
    for (int i=1; i<=9; i+=2){
        int j=7;
        for (int c=j; c>=5; c--){
            cout << "I=" << i << " J=" << c << endl;
        }
    }
    return 0;
}
