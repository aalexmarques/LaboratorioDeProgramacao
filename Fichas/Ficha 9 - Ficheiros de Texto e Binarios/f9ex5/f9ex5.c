#include <stdio.h>

int main(){
    FILE *fp;
    int nexecucoes;
    if ((fp = fopen("execucoes.dat","rb+")) == NULL){
        if((fp = fopen("execucoes.dat","wb")) == NULL){
            printf("Erro na abertura do ficheiro");
        }
        nexecucoes = 1;
    }else{
        fread(&nexecucoes,sizeof(int),1,fp);
        nexecucoes++;
        rewind(fp);
    }
    fwrite(&nexecucoes,sizeof(int),1,fp);
    printf("execucoes: %d\n",nexecucoes);
    fclose(fp);
}