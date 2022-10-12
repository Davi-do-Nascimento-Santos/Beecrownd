#include <stdio.h>
int main(){
    char sentence[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int num;
    scanf("%d", &num);
    for (int i=0; i<num; i++){
        printf("%c", sentence[i]);
    }
    printf("\n");
    return 0;
}
