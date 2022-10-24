#include <iostream>
using namespace std;
int fatorial(int n){
    int fat=1;
    if (n==1 || n== 0){
        return fat=1;
    }
    for (int i=1; i<=n; i++){
        fat*=i;
    }
    return fat;
}
int main(){
    int num, cont=0, rest;
    cin >> num;
    while(1){
        for (int i=1; i<=num; i++){
            if (fatorial(i)<=num){
                rest=fatorial(i);
            }else {
                break;
            }
        }
        num-=rest;
        cont++;
        if (num==0){
            break;
        }
}
    cout << cont << endl;
    return 0;
}
