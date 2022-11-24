#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int cont[3] = {0, 0, 0};
    while(a>=2){
        a-=2;
        cont[0]++;
    }
    while(b>=3){
        b-=3;
        cont[1]++;
    }
    while(c>=5){
        c-=5;
        cont[2]++;
    }
    int menor;
    for (int i=0; i<3; i++){
        if (i==0){
            menor = cont[i];
        }else{
            if (cont[i] < menor){
                menor = cont[i];
            }
        }
    }
    cout << menor << endl; 
    return 0;
}
