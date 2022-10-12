#include <stdio.h>
int main(){
	int km;	
	double sft, average;
	scanf("%d", &km);
	scanf("%lf", &sft);
	average = km / sft;
	printf("%.3lf km/l\n", average);
	return 0;
}
