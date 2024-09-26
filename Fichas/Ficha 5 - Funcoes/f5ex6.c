#include <stdio.h>
#include <math.h>

int is_upper(char c){
    return ('A' <= c && c <= 'Z') ? 1 : 0;
}

int is_lower(char c){
    return ('a' <= c && c <= 'z') ? 1 : 0; /operadores trunarios
}

int switch_case(char c){
    if (is_upper(c)) printf("- %c -> %c\n",c,c+32);
    else if (is_lower(c)) printf("- %c -> %c\n",c,c-32);
    else if (!'.'){
        printf("- %c nao e' uma letra\n",c);
    }
}

char read_char(){
    char c;
    do{
        fseek(stdin,0,SEEK_END); //só utilizamos o limpar do buffer em chars
        printf("Introduza uma letra ['.' para sair]: ");
        scanf("%c",&c); //dá espaço autiomaticamente
        switch_case(c);
    }while(c != '.');
}

int main(){
    read_char();

}

