#include <stdio.h>
#define TAMSTR 80

main() {
    FILE* fp;
    int n = 0;
    char linha[TAMSTR + 1];

    if ((fp = fopen("C:\\Temp\\linhas.txt", "r")) == NULL) {
        printf("Erro ao abrir o ficheiro linhas.txt\n");
        exit(1);
    }
    do
    {
        printf("Conteudo da linha %d: ", ++n);
        fgets(linha, TAMSTR + 1, fp);        
        fputs(linha, stdout);
    } while (linha[0] != '\n');
    fclose(fp);
    printf("O ficheiro foi lido\n");
}