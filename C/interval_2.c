#include <stdio.h>

int main(){
	int n, x, in=0, out=0, cont=1;
	scanf("%d", &n);
	while (cont <= n){
		scanf("%d", &x);
		if (10 <= x && x <= 20){
			in++;
		} else{
			out++;
		}
		cont++;
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	return 0;
}
