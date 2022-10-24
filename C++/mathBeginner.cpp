#include <iostream>
#include <cstdio>
using namespace std;
/*bool primo(int num){
    int cont=0;
    for (int i=1; i<=num; i++){
        if (num%i==0){
            cont++;
        }
    }
    if (cont>2){
        return false;
    }else{
        return true;
    }
}*/
void fatorial(double num){
    long double fat=1;
    for (int i=1; i<=num; i++){
        fat*=i;
    }
    cout << num << "! = " << fat << endl;
}
int main(){
    double n;
    /*cin >> n;
    int array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    for (int i=0; i<n; i++){
        if (primo(array[i]) && array[i] != 1){
            fatorial(array[i]);
        }
    }*/
    cin >> n;
    fatorial(n); 
    return 0;
}
