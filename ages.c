#include <stdio.h>
int main(){
    double age, all=0, med, cont=0;
    do {
        scanf("%lf", &age);
        if (age<0){
            break;
        }else{
            cont++;
            all+=age;

        }
    }while(1);
    med = all/cont;
    printf("%.2lf\n", med);
    return 0;
}
