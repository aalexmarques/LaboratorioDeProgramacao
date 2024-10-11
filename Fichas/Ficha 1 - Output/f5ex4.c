#include <stdio.h>

void printSimbolos(char c, int n){
    for (int i = 1; i <= n; i++) {
        putchar(c);
        }
    }

int main(){
    printf("Simbolo: ");
    char simbolo = getchar();
    int nSimbolos;
    printf("Numero de Simbolos: ");
    scanf("%d",&nSimbolos);
    printSimbolos(simbolo,nSimbolos);
    printf("\nBem-vindo\n");
    printSimbolos(simbolo,nSimbolos);

}
