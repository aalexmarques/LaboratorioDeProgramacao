#include <stdio.h>

int evazio(char c){
    return c == ' ' || c == '\t' || c == '\n' || c == EOF; // || c == 0  <- 2ª Maneira de fazer
}


int main(int argc, char *argv[]){
    if (argc != 2){ //erro se nao tiver 2 parametros
        printf("Erro: Especificar numero de ficherio");
        return -1;   
    }

    FILE *fp = fopen(argv[1],"rt"); //
    if (fp = NULL){ //erro se FP estiver a apontar para NULL
        printf("Erro: Erro ao abrir o ficheiro %s", argv[1]);
        return -1;
    }

    int carateres = 0, linhas = 0, palavras = 0; // 3ª maneira pavras = 1;
    char ch;
    char chAnterior = 0;
    while(!feof(fp)){
        ch = fgetc(fp); //proprio fgetc incrementa 
        if(evazio(ch) && !evazio(chAnterior)){ // (evazio(ch) && !evazio(chAnterior)) || chAnterior == 0  <- 1ª maneira de fazer
            palavras++;
        }if(ch == '\n' || ch == EOF){
            linhas++;
        }else{
            carateres++;
        }
        chAnterior = ch;
    }
    fclose(fp);
    /*
    3ª maneira
    
    if (carateres == 0)
        palavras = 0;
    */
    printf("Linhas: %d\n Palavra: %d\n Caracteres: %d\n", palavras, linhas, carateres);

}