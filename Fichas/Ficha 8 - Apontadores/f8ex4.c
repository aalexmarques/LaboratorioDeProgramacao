#include <stdio.h>
#include "./f8ex4funcoes/separaMinMai.c"

int main() {
    char str[MAX + 1], minus[MAX + 1], maisc[MAX + 1];
    printf("Introduza uma string (max:50 char): ");
    gets(str);
    separa_min_mai(str,minus,maisc);
    printf("- maisculas: %s\n- minusculas: %s",maisc,minus);


}
