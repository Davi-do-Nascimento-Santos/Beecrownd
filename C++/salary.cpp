#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int employee, hours;
    double money, salary;
    cin >> employee >> hours >> money;
    salary = money * hours;
    cout << "NUMBER =  " << employee << endl;
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}
