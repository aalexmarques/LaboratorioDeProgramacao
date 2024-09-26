#include <stdio.h>

int is_upper(char c){
    return ('A' <= c && c <= 'Z');
}

int is_lower(char c){
    return ('a' <= c && c <= 'z');
}

char switch_case (char c){
    if(is_upper(c)) return c+32;
    else return c-32;
}

char read_char(){
    char c;
    do{
        printf("Introduza uma letra ['.' para sair]: ");
        fseek(stdin,0,SEEK_END);
        scanf("%c",&c);
        if (is_upper(c) || is_lower(c)){
            printf("\n%c -> %c\n",c,switch_case(c));
        }else if(c != '.'){
            printf("\n%c nao e' uma letra\n",c);
        }

    }while(c != '.');
        printf("- Adeus!");
    }

int main(){
    read_char();
}