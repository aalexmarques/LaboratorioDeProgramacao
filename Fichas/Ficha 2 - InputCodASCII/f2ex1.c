#include <stdio.h>

int main(){
    printf("Introduza a letra minuscula: ");
    char c = getchar();
    printf("O correspondente maiusculo de %c = %c", c, c-32);
}