#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string name;
    double salary, sold, money;
    cin >> name;
    cin >> salary;
    cin >> sold;
    money = salary + (sold * 0.15);
    printf("TOTAL = R$ %.2lf\n", money);
    return 0;
}
