#include <iostream>
using namespace std;
int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string alphaMod, word;
    cin >> alphaMod;
    cin >> word;
    int cont=0;
    for (int i=0; i<10000; i++){
        if (word[i] != '\0'){
            cont++;
        }else{
            break;
        }
    }
    for (int i=0; i<cont; i++){
        for (int c=0; c<26; c++){
            if (word[i] == alphaMod[c]){
                cout << alphabet[c];
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
