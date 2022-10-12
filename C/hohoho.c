#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        printf("Ho");
        if (i<num){
            printf(" ");
        }else {
            printf("!\n");
        }
    }
    return 0;
}
