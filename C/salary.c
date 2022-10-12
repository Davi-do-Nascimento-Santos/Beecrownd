#include <stdio.h>
int main(){
	int people;
	double s, h, r;
	scanf("%d", &people);
	scanf("%lf", &h);
	scanf("%lf", &s);
	r = s * h;
	printf("NUMBER = %d\n", people);
	printf("SALARY = U$ %.2lf\n", r);
	return 0;
}
	
