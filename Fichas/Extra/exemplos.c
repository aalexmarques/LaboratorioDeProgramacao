#include <stdio.h>

int main(){
    FILE *fp; char nome[30]; int nota;
    
    if((fp=fopen("notas.dat","rb"))==NULL) {
        printf("erro na abertura do ficheiro\n");
        exit(1); //termina o programa por completo
    }
    while(fread(nome,sizeof(char),30,fp)==30 && fread(&nota,sizeof(int),1,fp)==1)
        printf("%s %d\n", nome, nota);
    fclose(fp);
}