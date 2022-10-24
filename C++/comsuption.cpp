#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double distance, liters, km;
    cin >> distance;
    cin >> liters;
    km = distance / liters;
    printf("%.3lf km/l\n", km);
    return 0;
}
