#include <stdio.h>

int main(int argc, char *argv[]){
    int i;
    FILE *fp;
    char ch;

    if(argc == 1){
        printf("Por favor, insira pelo menos o nome de um ficherio.\n");
        exit(1);
    }

    for(i = 1; i < argc; i++){
        if((fp = fopen(argv[i],"r"))==NULL)
            printf("Erro ao abrir o ficheikro %s\n", argv[i]);
        else{
            
        }

    }

}