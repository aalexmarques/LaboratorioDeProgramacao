#include <stdio.h>
#define MAXNUM 300

void subStringCifra(char str[]){
    int i;
    for(i=0; str[i]!='\0';i++){
        if ('A' <= str[i] && str[i] <= 'T' || 'a' <= str[i] && str[i] <= 't'){
            str[i] += 6;
        }else if ('U' <= str[i] && str[i] <= 'Z' || 'u' <0){
            str[i] -= 20;
        }
    }
}

int main(){
    char string[MAXNUM];
    gets(MAXNUM);
    
}