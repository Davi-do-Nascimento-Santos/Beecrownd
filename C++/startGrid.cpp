#include <iostream>
using namespace std;
int num;
int positions(int ele, int start[], int end[]){
    int ini, fim, result;
    for (int i=0; i<num; i++){
        if (ele == start[i]){
            ini = i;
        }
        if (ele == end[i]){
            fim = i;
        }
    }
    if (ini < fim || start[ini-1] == end[fim-1] && ini == fim){
        result = 0;
    }else if (start[ini-1] != end[fim-1] && ini == fim && ini != num-1){
        result = 1;
    }else {
        result = ini - fim;
    }
    return result;
}

int main(){
    while (cin >> num){ 
        int sum=0;
        cin >> num;
        if (num == EOF){
            break;
        }
        int start[num], end[num];
        for (int i=0; i<num; i++){
            cin >> start[i];
        }
        for (int i=0; i<num; i++){
            cin >> end[i];
        }
        for (int i=0; i<num; i++){
            sum += positions(start[i], start, end);
        }
        cout << sum << endl;
    }
    return 0;
}
