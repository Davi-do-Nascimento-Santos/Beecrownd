#include <stdio.h>

int main(){
	int number[] = {}, i = 0;
	do {
		scanf("%d", &number[i]);
	} while(number[-1] != 0);
	printf("%d", number[1]);
	return 0;;
}
