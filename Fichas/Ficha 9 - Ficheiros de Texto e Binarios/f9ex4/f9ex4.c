#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;
    if(argc == 1){
        printf("Uso %s arq_destino1 arq_destino2 arq_destino3 ...",argv[0]);
        return 1;
    }else{
        for(int i = 1; i < argc; i++){
            if((fp = fopen(argv[i],"r")) == NULL){
                printf("Erro ao abrir ficheiro %s",argv[i]);
            }else{
                printf("<linhas do %s>\n",argv[i]);
                while((ch = getc(fp))!=EOF){
                    putchar(ch);
                }
                putchar('\n');
                fclose(fp);
            }
        }
        return 0;
    }
}
