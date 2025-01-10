#include <stdio.h>

int ler_valor(){
    int valor;
    do{
        printf("\n\t1) Mau\n\t2) Nao Satisfaz\n\t3) Satisfaz\n\t4) Satisfaz Bastante\n\t5) Excelente\nAvaliacao: ");
        scanf("%d",&valor);
        if(valor < 1 || valor > 5){
            printf("ERRO!!! Reintroduza a avaliacao");
        }
    }
    while(valor < 1 ||
     valor > 5);
    return valor;
}

int qual2quant(int qual){
    switch (qual){
        case 1: return 0;
        case 2: return 5;
        case 3: return 12;
        case 4: return 17;
        case 5: return 20;
    }
}

int main(){
    int mediafinal = 0;
    for (int i = 1; i <= 6; i++){
        printf("=== Avaliacao %d ===",i);
        mediafinal += qual2quant(ler_valor());
    }
    printf("\n A nota finaldo aluno: %d", mediafinal/6);
}
