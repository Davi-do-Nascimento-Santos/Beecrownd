#include <iostream>
using namespace std;
int main(){
    int overflow, a, b, result;
    char op;
    cin >> overflow;
    cin >> a >> op >> b;
    if (op == '+'){
        result = a + b;
    }else{
        result = a * b;
    }
    if (result > overflow){ 
        cout << "OVERFLOW\n";
    }else{
        cout << "OK\n";
    }
    return 0;
}
