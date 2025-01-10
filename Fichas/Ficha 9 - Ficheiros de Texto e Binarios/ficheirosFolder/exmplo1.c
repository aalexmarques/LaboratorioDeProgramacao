#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    // Full path to the file
    //const char *filePath = "..\\testTxts\\readme.txt";

    if ((fp = fopen("readme.txt", "r")) == NULL) {
        printf("Erro na abertura do ficheiro!\n");
        exit(1);
    }

    do {
        ch = fgetc(fp); /* lê do ficheiro */
        if (ch != EOF)
            putchar(ch); /* mostra no ecrã */
    } while (ch != EOF);

    fclose(fp);
    return 0;
}