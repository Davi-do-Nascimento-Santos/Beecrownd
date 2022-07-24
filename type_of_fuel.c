#include <stdio.h>

int main(){
	int alcohol = 0, gasoline = 0, diesel  = 0, num;
	do {
		scanf("%d", &num);
		if (num == 1){
			alcohol++;
		} else if (num == 2){
			gasoline++;
		} else if (num == 3){
			diesel++;
		}
	} while (num != 4);
	printf("MUITO OBRIGADO\n");
	printf("Alcohol: %d\n", alcohol);
	printf("Gasoline: %d\n", gasoline);
	printf("Diesel: %d\n", diesel);
	return 0;
}
