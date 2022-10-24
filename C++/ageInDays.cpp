#include <iostream>
using namespace std;
int main(){
    int all, years, months, days;
    cin >> all;
    years = all / 365;
    months = (all % 365) / 30;
    days = ((all % 365) % 30);
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    return 0;
}
