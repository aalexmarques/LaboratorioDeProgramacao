#include <stdio.h>
#define STRMAX 100

void lerString(char *path, char *dest){
    FILE *fp = fopen(path, "rb");
    if (fp == NULL){
        printf("Erro ao abrir o ficheiro '%s' para leitura. \n", path);
        return;
    }
    fread(dest, sizeof(char), STRMAX, fp);
    fclose(fp);
}

void guardarString(char *path, char *dest){
    FILE *fp = fopen(path , "wb");
    if (fp == NULL){
        printf("Erro ao abrir o ficheiro '%s' para escrita.\n", path);
        return;
    }
    fwrite(dest, sizeof(char), STRMAX, fp);
    fclose(fp);
}

int main(int argc, char *argv[]){
    char path[] = "C:\\Users\\aabfc\\OneDrive\\Desktop\\C\\Ficha 9 - Ficheiros de Texto e Binarios\\resolucaoProfessor\\f9ex11_prof.bin";
    char str[STRMAX];
    int op;

    while(1){
        printf("---[MENU]---\n");
        printf("1. Inserir String \n");
        printf("2. Mostrar String \n");
        printf("3. Guardara para ficheiro \n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        printf("====== | Resultado | ======\n");
        
        switch(op){
            case 0:
                return 0;

            case 1:
                printf("Escreva uma string: ");
                fseek(stdin, 0, SEEK_END);
                fgets(str, STRMAX, stdin);
                break;

            case 2:
                printf("String atual: %s\n", str);
                break;

            case 3:
                guardarString(path, str);
                break;
            case 4:
                lerString(path, str);
        }
        printf("=====================\n");
    }
}