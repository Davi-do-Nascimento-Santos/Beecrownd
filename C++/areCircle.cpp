#include <iostream>
#include <cstdio>
#define pi 3.14159

using namespace std;
int main(){
    double r, area;
    cin >> r;
    area = r*r*pi;
    printf("A=%.4lf\n", area);
    return 0;
}

