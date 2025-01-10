#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if ((fp = fopen(argv[1],"r")) == NULL){
        printf("Nao foi possivel abrir o ficheiro %s\n",argv[1]);
        return 1;
    }

    ch=fgetc(fp);
    while(ch!=EOF){
        putchar(ch);
        ch=fgetc(fp);
    }
    fclose(fp);

    return 0;
}
