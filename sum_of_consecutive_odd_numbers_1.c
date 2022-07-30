#include <stdio.h>

int main(){
	int x, y, sum=0;
	scanf("%d%d", &x, &y);
	if (x<y){
		x++;
		for(x; x<y; x++){
			if (x%2!=0){
				sum+=x;
			}
		}
	}else if(x>y){
		x--;
		for(x; x>y;  x--){
			if (x%2!=0){
				sum+=x;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}

