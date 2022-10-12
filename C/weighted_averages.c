#include <stdio.h>

int main(){
	int n, cont=1;
	float a, b, c, average;
	scanf("%d", &n);
	while (cont<=n){
		scanf("%f%f%f", &a, &b, &c);
		average = ((a*2) + (b*3) + (c*5))/10.0;
		printf("%.1f\n", average);
		cont++;
	}
	return 0;
}

