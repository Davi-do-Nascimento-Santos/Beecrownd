#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    double a, b, c, av;
    cin >> a >> b >> c;
    av = (a*2 + b*3 + c*5) / 10;
    printf("MEDIA = %.1lf\n", av);
    return 0;
}
