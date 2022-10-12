#include <stdio.h>

int main(){
	int money, hundred, fifty, twenty, ten, five, two, one;
	scanf("%d", &money);
	hundred = money / 100;
	fifty = (money % 100) / 50;
	twenty = ((money %100) % 50) / 20;
	ten = (((money % 100) % 50) % 20) / 10;
	five = ((((money % 100) % 50) % 20) % 10) / 5;
	two = (((((money % 100) % 50) % 20) % 10) % 5) / 2;
	one = (((((money % 100) % 50) % 20) % 10) % 5) % 2;
	printf("%d nota(s) de R$ 100,00\n", hundred);
	printf("%d nota(s) de R$ 50,00\n", fifty);
	printf("%d nota(s) de R$ 20,00\n", twenty);
	printf("%d nota(s) de R$ 10,00\n", ten);
	printf("%d nota(s) de R$ 5,00\n", five);
	printf("%d nota(s) de R$ 2,00\n", two);
	printf("%d nota(s) de R$ 1,00\n", one);
	return 0;
}
