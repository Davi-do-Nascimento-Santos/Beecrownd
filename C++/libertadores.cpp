#include <iostream>
using namespace std;
void ganhador(int game1[2], int game2[2]){
    if (game1[0] == game2[0] && game1[1] == game2[1]){
        cout << "Penaltis" << endl;
    }else{
        int cont1=0, cont2=0;
        cont1 = game1[0] + game2[1];
        cont2 = game1[1] + game2[0];
        if (cont1 > cont2){
            cout << "Time 1" << endl;
        }else if(cont2 > cont1){
            cout << "Time 2" << endl;
        }else{
            if(game1[1] > game2[1]){
                cout << "Time 2" << endl;
            }else{
                cout << "Time 1" << endl;
            }
        }
    }

}
int main(){
    int times;
    cin >> times;
    for (int i=0; i<times; i++){
        int game1[2], game2[2];
        char caracter;
        cin >> game1[0] >> caracter >> game1[1];
        cin >> game2[0] >> caracter >> game2[1];
        ganhador(game1, game2);
    }
    return 0;
}
