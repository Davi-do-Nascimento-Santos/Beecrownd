#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    int force, num;
    scanf("%d", &num);
    for (int i=0;i<num; i++){
        scanf("%s", &name);
        scanf(" %d", &force);
        if (strcmp(name, "Thor")){
            printf("N\n");
        }else {
            printf("Y\n");
        }
        
    }
    


    return 0;
}
