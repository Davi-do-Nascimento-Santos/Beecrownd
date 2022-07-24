#include <stdio.h>

int main(){
	double price [] = {4, 4.50, 5, 2, 1.50};
	int x, y;
	double result = 0;
	scanf("%d%d", &x, &y);
	result = price[x-1] * y;
	printf("Total: R$ %.2lf\n", result);
	return 0;
}
