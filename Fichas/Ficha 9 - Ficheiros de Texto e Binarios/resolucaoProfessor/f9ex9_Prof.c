//ex9 ficha9
#include <stdio.h>


int main(int argc, char *argv[]){ //argc argument count, nº de arguementos nº de valores que o utilizar está a escrever na linha de comandos. argv, argument value -> quais os argumentos escritos
    if (argc != 2){ //quantos argumentos precisasmos para fazer isto 2!
        printf("Erro: Tem que especificar UM nome de ficheiro\n");
        //break; só quebra a execução NUM Ciclo não se aplicaria | então usamos um returno
        return -1;
    }

    FILE *fp = (fopen(argv[1], "rb")); //vai o argumento na posição 1 não na posição 0, "rb" read binary não é um ficheiro de texto
    if (fp == NULL){
        prtinf("Erro ao abrir o ficheiro '%s'\n");
        return -1;
    }
    fseek(fp, 0, SEEK_END);//vai para o fim do ficheiro | não há o EOF pq isto é um fichBinário não de texto
    printf("%ld bytes\n", ftell(fp)); 
    
    fclose(fp);
}
