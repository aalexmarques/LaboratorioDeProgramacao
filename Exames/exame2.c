#include <stdio.h>

int contaChar(char *str, char ch){
    char *p = str;
    unsigned short nChars = 0;
    do{
        if(*p == ch) nChars++;
    }while(*(p++) != '\0');
    return nChars;
}

//incrementar o apontador 

int substituiTodos(char *str, char antigoCh){
    char *p;
    for(p = str;*p!='\0'; p++){

    }
}

void mostra(char str[], char novoCh){

}


int main(){

}