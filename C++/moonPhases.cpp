#include <iostream>
using namespace std;
int main(){
    int first, second;
    cin >> first >> second;
    if (first<=2 || second<=2){
        if (first <=2 && second <= 2){
            cout << "nova\n";
        }else if (first < second){
            cout << "crescente\n";
        }else if(first > second && second <=2){
            cout << "nova\n";
        }else{
            cout << "minguante\n";
	    }
    }else if(first < 97 || second < 97){
        if (first < second && second < 97){
            cout << "crescente\n";
        }else if(first < second){
            cout << "cheia\n";
        }else{
            cout << "minguante\n";
        }
    }else if (first > 96 && second > 96){
        cout << "cheia\n";
    }
    return 0;
}
