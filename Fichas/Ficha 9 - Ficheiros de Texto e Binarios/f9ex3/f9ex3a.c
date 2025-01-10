#include <stdio.h>
#define TAMSTR 80

main() {
    FILE* fp;
    int n = 0;
    char linha[TAMSTR + 1];

    if ((fp= fopen("C:\\Temp\\linhas.txt", "w")) == NULL) {
        printf("Erro ao abrir o ficheiro linhas.txt\n");
        exit(1);
    }
    do
    {
        printf("Introduza linha %d: ", ++n);
        fgets(linha, TAMSTR + 1, stdin);        //gets(linha)
        fputs(linha, fp);
    } while (linha[0] != '\n');
    fclose(fp);
    printf("O ficheiro foi guardado\n");
}