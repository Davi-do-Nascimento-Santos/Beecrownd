#include <stdio.h>

int main(){
	double salary, increase;
	int per;
	scanf("%lf", &salary);
	if (0 <= salary && salary <= 400.00){	
		increase = salary * 0.15;
		salary = salary + (salary * 0.15);
		per = 15;
	} else if (400.00 < salary && salary <= 800.00){
		increase = salary * 0.12;
		salary = salary + (salary * 0.12);
		per = 12;
	} else if (800.00 < salary && salary <= 1200.00){
		increase = salary * 0.10;
		salary = salary + (salary * 0.10);
		per = 10;
	} else if (1200.00 < salary && salary <= 2000.00){
		increase = salary * 0.7;
		salary = salary + (salary * 0.7);
		per = 7;
	} else {
		increase = salary * 0.4;
		salary = salary + (salary * 0.4);
		per = 4;
	}
	printf("Novo salario: %.2lf\n", salary);
	printf("Reajuste ganho: %.2lf\n", increase);
	printf("Em percentual: %d %\n", per);
}
