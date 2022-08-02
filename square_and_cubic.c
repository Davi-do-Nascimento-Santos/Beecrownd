#include <stdio.h>
#include <math.h>
int main(){
	int n, cont;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		cont=i;
		for (int c=1; c<=3; c++){
			cont = pow(cont, c);
			printf("%d", cont);
			cont = i;
			if (c < 3){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
