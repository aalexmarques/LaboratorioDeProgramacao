#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int evogal(char c){
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') ? 1 : 0;
}

int econsoante(char c){
    c = tolower(c);
    return ((c >= 'a' && c <= 'z') && !evogal(c)) ? 1 : 0;
}

int main(){
    char s[MAX];
    while (1){
        int i = 0, numVogais = 0, numConsoantes = 0;
        printf("Introduza uma frase (max: 100): ");
        gets(s);
        if(strcmp(s,"sair") == 0 || strcmp (s,"Sair") == 0){
            break;
        }
        while (s[i] != '\0'){
            if (evogal(s[i])){
                numVogais+=1;
            }else if (econsoante(s[i])){
                numConsoantes+=1;
            }
            i++;
        }
        printf("<%d> vogais, <%d> consoantes\n", numVogais,numConsoantes);

    }

}