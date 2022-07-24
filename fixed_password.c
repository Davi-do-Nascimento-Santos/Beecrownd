#include <stdio.h>

int main(){
	int password = 2002, test;
	do {
		scanf("%d", &test);
		if (test == 2002){
			printf("Acesso permitido\n");
			break;
		} else {
			printf("Senha Invalida\n");
		}
	} while(1<10);
	return 0;
}
