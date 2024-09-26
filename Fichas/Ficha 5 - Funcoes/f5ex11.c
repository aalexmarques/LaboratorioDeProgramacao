#include <stdio.h>

char lerEstadoCivil(){
    char op;
    printf("Estado civil:\nc) Casado\ns) Solteiro\nv) Viuvo \nd) Divorciado\nR: ");
    fseek(stdin, 0, SEEK_END); //limpa buffer 
    scanf("%c",&op);
    return op;
}

void indicarSelecao(char op){
    printf("# Escolheu "); 
    switch (op){
        case 'C':
        case 'c':
            printf("'Casado'"); break;

        case 'S':
        case 's':
            printf("'Solteiro'"); break;
      
        case 'V':
        case 'v':
            printf("'Viuvo'"); break;

        case 'D':
        case 'd':
            printf("'Divorciado'"); break;
        default:
            printf("SAIR");
    }
}

int main(){
    char escolha;
    int nc = 0, ns = 0, nv = 0, nd = 0;

    //while (1){} -> loop infinito

    while(1){
    escolha = lerEstadoCivil();
    indicarSelecao(escolha);
    
    printf("\n\n");

    if(escolha == 'c' || escolha == 'C') nc++;
    else if(escolha == 's' || escolha == 'S') ns++;
    else if(escolha == 'v' || escolha == 'V') nv++;
    else if(escolha == 'd' || escolha == 'D') nd++;
    else break;
    }

    printf("+ Escolhido: ");
    if (nc > ns && nc > nv && nc > nd) printf("'Casados'");
    else if (ns > nv && ns > nd) printf("'Solteiros'");
    else if (nv > nd) printf("'Viuvos'");
    else printf("'Divorciados'");
}