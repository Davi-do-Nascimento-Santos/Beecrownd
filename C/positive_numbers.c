#include <stdio.h>

int main(){
	double cont = 0, number;
	for (int i = 1; i <= 6; i++){
		scanf("%lf", &number);
		if (number >= 0){
			cont++;
		}
	}
	printf("%lf valores positivos\n", cont);
	return 0;
}
