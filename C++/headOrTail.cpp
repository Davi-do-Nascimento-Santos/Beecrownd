#include <iostream>
using namespace std;
int main(){
    while(1){
        int times, mary=0, john=0;
        cin >> times;
        if (times==0){
            break;
        }
        for (int i=0; i<times; i++){
            int play;
            cin >> play;
            if (play == 0){
                mary++;
            }else{
                john++;
            }
        }
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    }
    return 0;
}
