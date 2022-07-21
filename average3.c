#include <stdio.h>
int main(){
	double n1, n2, n3, n4, media;
	scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
	printf("Media: %.1lf\n", media);
	if (media < 5){
		printf("Aluno reprovado.\n");
	} else if (media < 7){
		printf("Aluno em exame.\n");
		double nr, mf;
		printf("Nota do exame: ");
		scanf("%lf", &nr);
		mf = (media + nr) / 2;
		if (mf < 5){
			printf("Aluno reprovado.\n");
		} else {
			printf("Aluno aprovado.\n");
		}
		printf("Media final: %.1lf\n", mf);
	} else {
		printf("Aluno aprovado.\n");
	}
	return 0;
}
