#include <stdio.h>
#define MAX 10

int noMaisculas(char s[], int max){
    int i=0,n=0;
    while(i<max){
        if(s[i]>='A' && s[i]<='Z'){
            n++;
        }
        i++;
    }
    return n;
}

int noMinusculas(char s[], int max){
    int i=0,n=0;
    while(i<max){
        if(s[i]>='a' && s[i]<='z'){
            n++;
        }
        i++;
    }
    return n;
}

int insiraCars(char s[]){
    int i=0;
    while(i < MAX){
        fseek(stdin,0,SEEK_END);
        printf("%d: ",i+1);
        scanf(" %c", &s[i]);
        if(s[i] == '#')
            break;
        i++;
    }
    return i;
}

void ordemInversa(char s[],int max){
    for(int i = max-1; i>=0; i--){
        if(s[i] != '#'){
            printf("\n- %c",s[i]);
        }
    }
}

int main(){
    char s[MAX];
    printf("Insira os caracteres (# para terminar):\t [max:10]\n");
    int num = insiraCars(s);

    printf("Ordem Inversa (%d caracteres)", num);
    ordemInversa(s,num);
    
    printf("\n- maisculas: %d\n- minusculas: %d",noMaisculas(s,num),noMinusculas(s,num));
}
