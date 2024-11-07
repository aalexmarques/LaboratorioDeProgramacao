#include <stdio.h>

int main(){
    int ramos;
    printf("ramos: ");
    scanf("%d",&ramos);
    for (int i = 1; i<=ramos;i++){
        for(int j = 1; j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}