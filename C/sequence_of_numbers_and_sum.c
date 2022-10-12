#include <stdio.h>

int main(){
	int x, y;
	do {
		scanf("%d%d", &x, &y);
		int sum=0;
		if (x==0 || x<0 || y==0 || y<0){
			break;
		} else {
			if (x<y){
				for (x; x<=y; x++){
					printf("%d ", x);
					sum+=x;	
				}
			} else if (x>y){
				for (y; y<=x; y++){
					printf("%d ", y);
					sum+=y;
				}
			} else{
				sum=x;
			}
		}
		printf("Sum=%d\n", sum);


	} while(1);
	return 0;
}
