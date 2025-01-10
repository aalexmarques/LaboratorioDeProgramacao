#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    FILE *fp1, *fp2;
    char ch;

    //a instrução "prog.exe texto.txt copia.txt" copia o conteúdo do ficheiro texto.txt para um outro de nome copia.txt

    if (argc != 3) {
        printf("Uso: %s arquivo_origem arquivo_destino\n", argv[0]);
        exit(1);
    }

    if ((fp1 = fopen(argv[1], "r")) == NULL) {
        printf("Erro na abertura do ficheiro de origem!\n");
        exit(1);
    }

    if ((fp2 = fopen(argv[2], "w")) == NULL) {
        printf("Erro na abertura do ficheiro destino!\n");
        fclose(fp1);
        exit(2);
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("Cópia concluída com sucesso.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}