#include <stdio.h>

int is_upper(char c){ 
    return (c >= 'A' && c <= 'Z'); //? 1 : 0;
} //devolve verdade (̸=0) caso c seja maiúscula

int is_lower(char c){
    return (c >= 'a' && c <= 'z'); //? 1 : 0;
} //devolve verdade (̸=0) caso c seja minúscula

char switch_case(char c){
    //is_upper(c) ? return c+32 : return c-32;
  
    if (is_upper(c)){
        return c+32;
    }else{
        return c-32;
    }
} //devolve a versão oposta (minúscula/maiúscula) do carácter c


char read_char(){
    char c;
    do{
        fseek(stdin,0,SEEK_END);
        printf("Introduza uma letra ['.' oara sair]: ");
        c = getchar();
        if (c != '.' && !is_upper(c) && !is_lower(c)) 
            printf("- %c nao e' uma letra\n",c);
    }while(c != '.' && !is_upper(c) && !is_lower(c));
    return c;
} //pergunta (em loop) ao utilizador por um carácter até que introduza uma letra ([A-Z], [a-z]) ou o caraceter ’.’ e devolve-a

int main(){
    char c;
    do{
        c = read_char();
        if (c != '.')
        printf("- %c -> %c\n", c, switch_case(c));
    }while(c != '.');
    printf("- Adeus!");

    return 0;
}










/*#include <stdio.h>
#include <math.h>

int is_upper(char c){
    return ('A' <= c && c <= 'Z') ? 1 : 0;
}

int is_lower(char c){
    return ('a' <= c && c <= 'z') ? 1 : 0; //operadores trunarios
}

void switch_case(char c){
    if (is_upper(c)) printf("- %c -> %c\n",c,c+32);
    else if (is_lower(c)) printf("- %c -> %c\n",c,c-32);
    /*else if (!'.'){
        printf("- %c nao e' uma letra\n",c);
    }*/
/*}

char read_char(){
    char c;
    do{
        fseek(stdin,0,SEEK_END); //só utilizamos o limpar do buffer em chars
        printf("Introduza uma letra ['.' para sair]: ");
        scanf("%c",&c); //dá espaço autiomaticamente
        switch_case(c);
    }while(c != '.');
    printf("- Adeus!");
}

int main(){
    read_char();

}

------------------------------------

*/


/*#include <stdio.h>

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
} */

