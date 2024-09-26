#include <stdio.h>

int main(){
    int nLinhas = 15, pontos = 1;
    for(int i = 0;i<nLinhas;i++){ //A cada iteração vai escrever o se
        for(int y = 0;y<nLinhas-i;y++){
            printf(" ");
        }
        for(int j = 0;j<pontos;j++){
            printf("*");
        }
        printf("\n");
        pontos+=2;
    }
    for (int i = 1;i<pontos/2;i++) printf(" ");
    printf("|||");
    return 0;
}