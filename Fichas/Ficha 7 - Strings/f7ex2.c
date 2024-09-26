#include <stdio.h> 

int isnull(char *str){
    return str[0] == '\0';
}

int strlen(char *str){
    int i;
    for(i = 0; str[i] != '\0'; i++);
    return i;
}

char *strlwr(char *str){
    int i;
    for (i=0; str[i]!='\0'; i++){
        if('A' <= str[i] && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}


int main(){
    
}