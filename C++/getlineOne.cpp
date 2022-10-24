#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    double distance;
    string name;
    while(getline(cin, name)){
        double all=0;
        for (int i=0; i<3; i++){
            getline(cin, name);
            cin >> distance;
            cin.ignore();
            all += distance*2;
        }
        printf("%.1lf\n", all/3);
    }
    return 0;
}
