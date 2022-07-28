#include <stdio.h>

int main(){
	for (int i=1; i <= 9; i+=2){
		int j=7;
		for (int c=1; c<=3; c++){
			printf("I=%d J=%d\n", i, j);
			j--;
		}
	}
	return 0;
}
