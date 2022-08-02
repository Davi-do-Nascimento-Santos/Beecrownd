#include <stdio.h>

int main(){
	int n, cont=1;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		for (int c=1; c<=3; c++){
			printf("%d ", cont);
			cont++;
		}
		cont++;
		printf("PUM\n");
	}


	return 0;
}
