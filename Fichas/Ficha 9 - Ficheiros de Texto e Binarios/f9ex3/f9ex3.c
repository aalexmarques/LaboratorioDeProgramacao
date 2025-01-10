#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 256

int main(){
    FILE *fp;
    char str[MAXCHAR];

    if((fp = fopen("linhas.txt","w")) == NULL){
        printf("Erro na abertura do ficheiro\n");
        return 1; //ou exit(EXIT_FAILURE)
    }else{
        int i = 1;
        while(1){
            printf("Introduza a linha %d: ",i++); 
            gets(str);
            if(strlen(str) == 0){
                break;
            }
            fputs(strcat(str,"\n"),fp);
        }
        fclose(fp);
        printf("- O ficheiro foi guardado");
        
        return 0;
    }
}