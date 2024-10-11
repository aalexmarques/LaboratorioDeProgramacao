#include <stdio.h>

int isLetter(char c){
    if ((65 <= c && c <= 90) || (65+32 <=c && c <= 90+32)){
        return 1;
    }else{
        return 0;
    }
}

int is_upper(char c){
//devolve verdade (̸=0) caso c seja maiúscula
    if (65 <= c && c <= 90){
        return 1;
    }else {
        return 0;
    }
}

int is_lower(char c){
//devolve verdade (̸=0) caso c seja minúscula
    if (65+32 <= c && c <= 90+32){
        return 1;
    }else {
        return 0;
    }
}


char switch_case(char c){
    if(is_upper(c)){
        c+=32;
    }else if(is_lower(c)){ //só e necessario um else sem o if(is_lower)
        c-=32;
    }
    return c;
}



char read_char(){
    char c;
    while(c != '.')
    {
        printf("Introduza uma letra ['.' para sair]: "); 
        c = getchar(); 

        if (isLetter(c)){
            printf("- %c -> %c\n",c,switch_case(c));

        }else if(c != '.'){
            
            printf("\n- %c nao e' uma letra\n ");
        }
        fseek(stdin,0,SEEK_END);
    }
    printf("Adeus!");
    return c;
}

//pergunta (em loop) ao utilizador por um carácter até que introduza uma letra ([A-Z], [a-z]) ou o caraceter ’.’ e devolve-a

int main(){
    char c = read_char();
}