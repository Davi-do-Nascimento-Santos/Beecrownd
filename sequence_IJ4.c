#include <stdio.h>

int main(){
	float i=0, j=0;
	int cont=0;
	while (i <=2.1){
		if (cont == 0){
			for (float c=1; c<=3; c++){
				j = c+i;
				printf("I=%.0lf J=%.0lf\n", i, j);
			}
		} else{
			for (float c=1; c<=3; c++){
				j = c+i;
				printf("I=%.1lf J=%.1lf\n", i, j);
			}
		}
		cont++;
		i+=0.2;
		if (cont = 4){
			j--;
		}
		//if (i >=2){
		//	break;
	//	}
	}// while(1);

	return 0;
}
