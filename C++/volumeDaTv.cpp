#include <iostream>
using namespace std;
int main(){
    int volumeIni, mod, vol;
    cin >> volumeIni >> mod;
    for (int i=0; i<mod; i++){
        cin >> vol;
        if (vol < 0){
            if ((volumeIni + vol) < 0){
                volumeIni = 0;
            }else{
                volumeIni += vol;
            }
        }else{
            if ((volumeIni + vol)> 100){
                volumeIni = 100;
            }else{
                volumeIni += vol;
            }
        }
    }
    cout << volumeIni << endl;
    return 0;
}
