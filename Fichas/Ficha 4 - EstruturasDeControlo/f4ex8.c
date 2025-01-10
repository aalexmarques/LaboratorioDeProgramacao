#include <stdio.h>

int main(){
    int ramos;
    printf("ramos: ");
    scanf("%d",&ramos);
    for (int i = 0; i<=ramos;i++){
        char letra = 'A' + (i - 1);
        for(int j = 1; j<=i;j++){
            printf("%c", letra);
        }
        printf("\n");
    }

}