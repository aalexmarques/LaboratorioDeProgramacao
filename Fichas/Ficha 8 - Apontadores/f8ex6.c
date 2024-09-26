#include <stdio.h>
#define NMAX 50

void ler_vetor(int *v, int max){
    int *pi;
    for (pi = v; pi < v + max; pi++){
        printf("[%p]:[%p] - %d: ", v, pi, pi - v);
        //                               ^^^ está a subtrair elementos
        scanf("%d",pi);
    }
}

void print_vetor(int *v, int max){
    int *pi;
    for (pi = v; pi < v + max; pi++){//     
        printf("[%p]:[%p] - [%d]:%d\n", v, pi, pi - v, *pi); //<- o valor apontado
        //                                     ^^^^^^ está a subtrair elementos

    }
}

void trocar(int *pA, int *pB){
    int temp = *pA;
    *pA = *pB;
    *pB = temp;
}


void troca_vetor(int *v1, int *v2, int max){
    int *pi, *pj;
    
    for (pi = v1, pj = v2; pi < v1 + max; pi++, pj++){
        trocar(v1,v2);
    }
}


int main(){
    int vetor1[NMAX], vetor2 [NMAX], tmn;
    
    printf("Quantidade de valores a ler[max: 50]: ");
    scanf("%d", &tmn);
    if(tmn > NMAX)
        tmn = NMAX;

    printf("# Introduza os valores do vetor 1: \n");
    ler_vetor(vetor1, tmn);
    printf("# Introduza os valores do vetor 2: \n");
    ler_vetor(vetor2, tmn);


    printf("Valores Impressos:\n");


}