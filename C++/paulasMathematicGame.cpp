#include <iostream>
using namespace std;
bool character(char letter){
    char upperCase[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i=0; i<26; i++){
        if (letter == upperCase[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int num;
    cin >> num;
    for (int i=0; i<num; i++){
        int a, b, result;
        char letter;
        cin >> a >> letter >> b;
        if (character(letter)){
            if (a != b){
                result = b - a;
            }else{
                result = a * b;
            }
        }else{
            if (a != b){
                result = a + b;
            }else{
                result = a * b;
            }
        }
        cout << result << endl;
    }
    return 0;
}
