#include <stdio.h>

int main(){
	float a, b, m;
	do {
		scanf("%f", &a);
		if (a>=0 && a<=10){
			break;
		}else {
			printf("nota invalida\n");
		}
	} while(1);
	do {
		scanf("%f", &b);
		if (b>=0 && b<=10){
			break;
		}else {
			printf("nota  invalida\n");
		}
	} while(1);
	m = (a+b)/2;
	printf("media = %.2f\n", m);
	return 0;
}
