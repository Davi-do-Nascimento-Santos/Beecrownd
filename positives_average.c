#include <stdio.h>

int main(){	
	float n, average, all=0, cont=0;
	for (int i =1; i<=6; i++){
		scanf("%f", &n);
		if (n > 0){
			all+=n;
			cont++;
		}

	}
	printf("%.0f valores potitivos\n", cont);
	average = all / cont;
	printf("%.1f\n", average);



	return 0;
}
