#include <stdio.h>

int main(){
    char siglaLab;
    printf("Introduza o laboratorio do Piso -1 Ala Poente 1 [A, C, V, R]: ");  
    scanf("%c",&siglaLab); //a,C,V,r
    switch(siglaLab){
        case 'A':
        case 'a':
            printf("- Laboratio de Computcao Avancada");
            break;
        case 'C':
        case 'c':
            printf("- Laboratorio de Infraestruturas e Comunicacoes");
            break;
        case 'v':
        case 'V':
            printf("- Laboratio de Computacao Grafica e Ambiente Virtual");
            break;
        case 'r':
        case 'R':
            printf("- Laboraatorio de Controlo Automacao e Roboticas");
            break;
        default:
            printf("- Nao e laboratorio do Piso -1 - Ala poente 1!");
    }
}

