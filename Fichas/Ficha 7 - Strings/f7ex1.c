#include <stdio.h>
#define MAXNUM 300

void subString(char str[]){
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i] == ' ')
            str[i] = '\n';       
    }
}

int main(){
    char string[] = "Uma String Com Varias Palavras"; //não precisamos de dar um tamanho pq já sabe qual é que tem
    printf("Antes: %s", string);
    subString(string);
    printf("\n\nDepois: %s", string);
}


/*

#include <stdio.h>
char subString(char *str){ // isto está a igual ao chamar o char str[MAXNUM] normal
//char *subString(char *str) // vamos atribuir o endereço e o seu conteudo a uma nova string
    int i;
    
    for(i=0; str[i] != '\0'; i++){

    }
    //return str;
}


int main(){
    char *str ="Uma String Com Varias Palavras";


    printf()
}

*/