#include <stdio.h>
int main(){
    char word[21];
    scanf("%s", word);
    int cont=0;
    for (int i=0; i<20; i++){
        if (word[i] != '\0'){
            cont++;
        }else{
            break;
        }
    }
    if (cont >= 10){
        printf("palavrao\n");
    }else{
        printf("palavrinha\n");
    }
    return 0;
}
