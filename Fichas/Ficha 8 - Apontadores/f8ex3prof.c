#include <stdio.h>
#include <string.h>
#define MAXSTR 80

int contaChar(char *str, char ch){
    int *p;
    int conta = 0;
    //for(i=0; str[i]!='\0'; i++) metodo tradicional
    for(p = str; *p != '\0'; p++){ //metodo de apontadores
        if (*p == ch)
            conta++;
        return conta;
    }
}

int main(){
    char str[MAXSTR];
}