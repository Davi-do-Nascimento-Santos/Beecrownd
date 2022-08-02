#include <stdio.h>

int main(){
	int n, cont, bigger=0;
	for (int i=1; i<=100; i++){
		scanf("%d", &n);
		if (n>bigger){
			bigger=n;
			cont=i;
		}
	}
	printf("%d\n", bigger);
	printf("%d\n", cont);
	return 0;
}
