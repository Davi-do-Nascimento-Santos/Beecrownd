#include <iostream>
using namespace std;
void repete(char letter, int num){
    for (int i=0; i<num; i++){
        cout << letter;
    }
}
int main(){
    int num;
    cin >> num;
    cout << "Ent";
    repete('a', num);
    cout << "o eh N";
    repete('a', num);
    cout << "t";
    repete('a', num);
    cout << "l!\n";
    return 0;
}
