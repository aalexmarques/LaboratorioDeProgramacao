#include <stdio.h>


int main(){
    char ch;
    printf("Insira um caracter: ");
    ch = getchar();
    if('a' <= ch && ch <= 'z'){
        ch-=32;
        printf("e minuscula \nVERSAO MAISCULA: %c",ch);
    }else if('A' <= ch && ch <= 'Z'){
        ch+=32;
        printf("E MAISCULA \nVersao minuscula: %c",ch);
    }else if('0' <= ch && ch <= '9'){
        printf("e um algarismo");
    }else{
        printf("Nao e alfanumerico");
    }
    return 0;
}