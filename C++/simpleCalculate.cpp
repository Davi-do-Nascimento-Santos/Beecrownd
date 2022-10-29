#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int p1,u1, p2, u2;
    double price1, price2, total;
    cin >> p1 >> u1 >> price1;
    cin >> p2 >> u2 >> price2;
    total = u1*price1 + u2*price2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
