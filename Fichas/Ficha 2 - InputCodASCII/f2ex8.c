#include <stdio.h>

/*
int main(){
    int c = getchar();
    if(65 <= c && c <= 90){
        printf("E MAISCULA");
    }else if(97 <= c && c <= 122){
        printf("e minuscula");
    }else if(48 <= c && c <= 57){
        printf("e algarismo");
    }else{
        printf("nao e alfanumerico");
    }
    return 0;
}
*/
int main(){
    char ch;
    printf("Insiria um caracter: ");
    scanf(" %c", &ch);
    if('a' <= ch && ch <= 'z'){
        printf("\ne minuscula");
    }
    return 0;
}