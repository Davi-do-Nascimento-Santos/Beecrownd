#include <stdio.h>

int main(){
	int n, cobaias, coelhos=0, ratos=0, sapos=0, cobaias_total=0;
	double per_coe, per_rat, per_sap;
	char tipo;
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		scanf("%d", &cobaias);
		scanf(" %c", &tipo);
		cobaias_total+=cobaias;
		if (tipo == 'C'){
			coelhos+=cobaias;
		}else if(tipo == 'R'){
			ratos+=cobaias;
		}else if(tipo == 'S'){
			sapos+=cobaias;
		}
	}
	per_coe = (coelhos*1.0/cobaias_total)*100;
	per_rat = (ratos*1.0/cobaias_total)*100;
	per_sap = (sapos*1.0/cobaias_total)*100;
	printf("Total: %d cobaias\n", cobaias_total);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2lf %%\n", per_coe);
	printf("Percentual de ratos: %.2lf %%\n", per_rat);
	printf("Percentual de sapos: %.2lf %%\n", per_sap);
	return 0;
}
