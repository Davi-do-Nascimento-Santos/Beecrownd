#include <stdio.h>

int main(){
	int x, y, v_inter=0, v_gremio=0, cont=0, continua, empate=0;
		do {
		scanf("%d%d", &x, &y);
		cont++;
		if (x>y){
			v_inter++;
		} else if(x<y){
			v_gremio++;
		} else{
			empate++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		do {
			scanf("%d", &continua);
			if (continua ==1 || continua==2){
				break;
			}
		} while(1);
	} while(continua==1);
	printf("%d grenais\n", cont);
	printf("Inter: %d\n", v_inter);
	printf("Gremio: %d\n", v_gremio);
	printf("Empates: %d\n", empate);
	if (v_inter>v_gremio){
		printf("Inter venceu mais\n");
	} else if(v_inter<v_gremio){
		printf("Gremio venceu mais\n");
	} else{
		printf("Não houve vencedor\n");
	}



	return 0;
}
