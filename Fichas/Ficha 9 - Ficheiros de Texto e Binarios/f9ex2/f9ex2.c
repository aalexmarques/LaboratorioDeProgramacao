#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   
    FILE *fp1, *fp2;
    char ch;

    if(argc != 3){
        printf("Uso %s arq_origem arq_destino\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if((fp1 = fopen(argv[1],"r")) == NULL){
        printf("Nao foi possivel abrir o ficheiro %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((fp2 = fopen(argv[2],"w")) == NULL){
        printf("Nao foi possivel abrir o ficheiro %s\n", argv[2]);
        fclose(fp1);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
