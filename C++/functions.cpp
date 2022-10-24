#include <iostream>
using namespace std;
void biggerValueFunction(int x, int y){
    int functions[3], bigger, pos;
    functions[0] = ((3*x)*(3*x)) + (y*y);
    functions[1]= 2 * (x*x) + (5*y)*(5*y);
    functions[2] = -100*x + (y*y*y);
    for (int i=0; i<3; i++){
        if (i==0){
            bigger = functions[i];
            pos = i;
        }else{
            if (functions[i]>bigger){
                bigger = functions[i];
                pos = i;
            }
        }
    }
    if (pos==0){
        cout << "Rafael ganhou" << endl;
    }else if(pos==1){
        cout << "Beto ganhou" << endl;
    }else{
        cout << "Carlos ganhou" << endl;
    }
}

int main(){
    int times;
    cin >> times;
    for (int i=0; i<times; i++){
        int x, y;
        cin >> x >> y;
        biggerValueFunction(x, y);
    }
    return 0;
}
