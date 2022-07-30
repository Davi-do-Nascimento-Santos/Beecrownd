#include <stdio.h>

int main(){
	int num, cont=0;
	scanf("%d", &num);
	do {
		if (num%2 != 0){
			printf("%d\n", num);
			cont++;
		}
		num++;
		if (cont == 6){
			break;
		}
	} while(1);
	return 0;
}
