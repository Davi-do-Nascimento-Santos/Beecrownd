#include <stdio.h>
int main(){
	int hours, km;
	double liters;
	scanf("%d", &hours);
	scanf("%d", &km);
	liters = (hours * km) / 12.0;
	printf("%.3lf\n", liters);
	return 0;
}
