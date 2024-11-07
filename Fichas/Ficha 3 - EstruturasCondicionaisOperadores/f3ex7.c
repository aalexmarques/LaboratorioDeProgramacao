#include <stdio.h>

int main(){
    printf("Introduza a sigla do clube [B,G,P,S]: ");
    char c = getchar();
    switch (c){
    case 'b':
    case 'B': printf("- Benfica"); break;
    case 'g':
    case 'G': printf("- Guimares"); break;
    case 'p':
    case 'P': printf("- Porto"); break;
    case 's':
    case 'S': printf("- Sporting"); break;
    default: printf("- Clube sem motivos de intersse"); break;
    }
}