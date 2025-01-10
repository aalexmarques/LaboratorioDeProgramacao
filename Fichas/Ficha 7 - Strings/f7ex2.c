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

char *strupr(char *str){
    int i;
    for (i=0; str[i]!='\0'; i++){
        if('a' <= str[i] && str[i] <= 'z')
        str[i] -= 32;
    }
    return str;
}

int strcountc(char *str, char ch){
    int i, count = 0;
    for (i=0; str[i]!='\0';i++){
        if (str[i] == ch) count++;
    }
    return count;
}

int indchr(char *str, char ch){
    int i, encontrado = -1;
    for (i=0; str[i]!=ch || str[i]!='\0';i++){
        if(str[i] == ch){
            encontrado = i;
        }
    }
    return encontrado;
}

int iswhite(char ch){
    return (ch  == ' ' || ch == '\t' || ch == '\n' );
}

char *trimright(char *str){
    int i;
    for (i = strlen(str)-1 ; i >= 0 && iswhite(str[i]) ; i--);
    str[i + 1] = '\0';
    return str;
}

char *trimleft(char *str){
    int i, j;
    for (j=0 ; str[j] != '\0' && iswhite(str[j]); j++)
    if(j>0){
        for (i = j; str[i] != '\0'; i++)
            str[i-j] = str[i];
    str[i-j] = '\0';
    }
    return str;
}

char *strcpy(char *dest, char *src){
    int i;
    for(i=0; src[i]!='\0';i++)
        dest[i]=src[i];
    dest[i]='\0';
    return dest;
}

char *strcat(char *dest, char *src){
    int i, len = strlen(dest);
    for(i = 0; src[i]!='\0'; i++)
        dest[len+i]=src[i];
    dest[len+i]='\0';
}   

int palindrome(char *str){
    strlwr(str);
    int i, esq = 0, dir = strlen(str)-1;
    while(esq < dir){
        if(str[esq] != str[dir])
            return 0;
        esq++;
        dir--;
    }  
    return 1;
}

int strcmp(char *s1, char *s2){
    int i;
    for(i=0; s1[i]==s2[i] && s1[i]!='\0';i++)
        return(s1[i]-s2[i]);
} 

int strcmp(char *s1, char *s2){
    int i;
    char *s1lower = strlwr(s1), *s2lower = strlwr(s2);
    for(i=0; s1lower[i]==s2lower[i] && s1lower[i]!='\0';i++)
        return(s1lower[i]-s2lower[i]);
}

char *strdelc(char *str, char c){
    for (int i = 0; i != '\0'; i++){
        if (c == str[i]){
            str[i] = str[i+1];
        }
    }
}

int main(){
    
}