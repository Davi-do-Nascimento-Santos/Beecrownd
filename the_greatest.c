#include <stdio.h>
int main(){
	int a, b, c, maior;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	maior = (a + b + a * b * c * (a - b)) / 2;
	printf("%d eh o maior\n", maior);
	return 0;
}
