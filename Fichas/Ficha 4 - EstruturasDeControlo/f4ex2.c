#include <stdio.h>
int main(){
    int linha, coluna;

    for (linha = 1; linha <= 10; linha++){
        for (coluna = 1; coluna <= linha; coluna++){
            printf("%d ",coluna);
        }
        printf("\n");
    }


    return 0;
}