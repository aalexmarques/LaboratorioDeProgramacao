#include <stdio.h>
#define MAXCHAR 80

int conta_char(char *str, char c){
    int num = 0;
    for (int i = 0; str[i]!='\0';i++){
        if(str[i] == c) num++;
    }
    return num;
}

void print_inverso(char *str){
    int i=0;
    while (str[i] != '\0' && i++ < MAXCHAR);
    for (int j=i; j >= 0; j--) printf("%c",str[j]);
}

int main(){
    char str[MAXCHAR], c;
    printf("Introduza uma string (max: 80 char): ");
    gets(str);
    printf("Introduza um caractere: ");
    fseek(stdin,0,SEEK_END);
    scanf("%c",&c);
    printf("<%c> encotrado <%d> vezes\n",c,conta_char(str, c));
    print_inverso(str);


}