#include <stdio.h>

int main(){
	int hi, hf, allTime;
	scanf("%d%d", &hi, &hf);
	if (hi ==  hf){
		allTime = 24;
	}else if (hi < hf){
		allTime = hf - hi;
	}else {
		allTime = (24 - hi) + hf;
	}
	printf("O JOGO DUROU %d HORAS(S)\n", allTime);
	return 0;
}
