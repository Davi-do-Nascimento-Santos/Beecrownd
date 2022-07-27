#include <stdio.h>

int main(){
	double x, y, media;
	int cont;
	do {
		do {
			scanf("%lf", &x);
			if (x <0 || x > 10){
				printf("nota invalida\n");
			}
		} while (x < 0 || x > 10);
		do {
			scanf("%lf", &y);
			if (y < 0 || y > 10){
				printf("nota invalida\n");
			}
		} while (y < 0 || y > 10);
		media = (x + y) / 2;
		printf("media = %.2lf\n", media);
		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &cont);
		} while (cont != 1 && cont != 2);
	}while (cont == 1);
	return 0;
}
