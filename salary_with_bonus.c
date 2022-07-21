#include <stdio.h>
int main(){
	char name[20];
	double salary, sold, all;
	scanf("%s", name);
	scanf("%lf", &salary);
	scanf("%lf", &sold);
	all = salary + (sold * 0.15);
	printf("TOTAL = R$ %.2lf\n", all);
	return 0;
}
