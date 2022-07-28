#include <stdio.h>

int main(){
	int i=1, j=60;
	do {
		printf("I=%d J=%d\n", i, j);
		if (j <=0){
			break;
		}
		j-=5;	
		i+=3;
	}while(1);


	return 0;
}
