#include <iostream>
using namespace std;
int main(){
    int first, second;
    cin >> first;
    int numbers1[first];
    for (int i=0; i<first; i++){
        cin >> numbers1[i];
    }
    cin >> second;
    int numbers2[second];
    for (int i=0; i<second; i++){
        cin >> numbers2[i];
    }
    int posi=0;
    for (int i=0; i<first; i++){
        int cont=0;
        for (int c=0; c<second; c++){
            if (numbers1[i] == numbers2[c]){
                cont++;
                break;
            }
        }
        if (cont==0){
            if (posi==0){
                cout << numbers1[i];
            }else{
                cout << " " << numbers1[i];
            }
            posi++;
        }
    }
    cout << endl;
    return 0;
}
