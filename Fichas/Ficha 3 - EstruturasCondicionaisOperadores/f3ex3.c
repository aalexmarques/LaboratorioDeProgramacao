#include <stdio.h>

int main(){
    printf("Insira a sigla do estado civil : ");
    char c;
    c = getchar();

    printf("O seu estado civil e': ");
    switch (c)
    {
    case 's':
    case 'S': printf("Solteiro\n"); break;
    case 'c':
    case 'C': printf("Casada\n"); break;
    case 'v':
    case 'V': printf("Viuvo\n"); break;
    case 'd':
    case 'D': printf("Divorciado"); break;
    
    default:
        printf("Invalido"); break;
    }
}