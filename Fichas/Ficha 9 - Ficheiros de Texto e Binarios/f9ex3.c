#include <stdio.h>
#define NMAX 80

int main(){
    char linha[NMAX];
    int nlinha = 1; //i 

    FILE *fp; //apontador do tipo file
    if((fp=fopen("c:\\tempo\\linhas.txt","w"))==NULL){ //FILE *fopen(char *nome, char *mode);
        printf("Erro ao criar of ficheiro !\n"); //não consegue validar quando está em areas que não tem permissoes no windows
    }else{
        do{
            printf("Linha [%d]",nlinha);
            fgets(linha, NMAX, stdin); //nao poem o /0 poem o /n
            fputs(linha, fp); 
            nlinha++;
        }while(linha[0]!='\n');
        fclose(fp);
    }
}