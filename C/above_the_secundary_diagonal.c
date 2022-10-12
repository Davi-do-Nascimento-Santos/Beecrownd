#include <stdio.h>
int main(){
    int num=1, mat[5][5];
    for (int i=0; i<=4; i++){
        for (int c=0;  c<=4; c++){
            mat[i][c]=num;
            printf("%d ", mat[i][c]);
            num++;
        }
        printf("\n");
    }
    for (int i=4; i>=0; i--){
        for (int c=0; c<=4; c++){
            

        }

    }
    return 0;
}
