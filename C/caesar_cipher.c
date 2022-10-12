#include <stdio.h>
#include <string.h>
int main(){
    char alphabet[26]= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int vezes;
    scanf("%d", &vezes);
    for(int w=0; w<vezes; w++){
        char nome[40];
        scanf("%s", nome);
        int n, pos, cont=strlen(nome);
        scanf("%d", &n);
        for(int c=0;c<cont; c++){
            for (int i=0; i<26; i++){
                if (nome[c] == alphabet[i]){
                    if ((i-n) >= 0){
                        pos=i-n;
                        printf("%c", alphabet[pos]);
                        break;
                    }else{
                        pos= 26 + (i-n);
                        printf("%c", alphabet[pos]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
