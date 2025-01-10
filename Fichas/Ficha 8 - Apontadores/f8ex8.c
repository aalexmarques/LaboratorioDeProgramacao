#include <stdio.h>

void ler_valores(float *pa, float *pb){
    scanf("%f", pa); //Está a indicar o endereço
    scanf("%f", pb);
}

void imp_valores(float a,float b,float *pa,float *pb){
    printf("a: %f\nb: %f\npa:%p \npb:%p \n*pa:%f \n*pb:%f",a,b,pa,pb,*pa,*pb);
}

void troca_valoresAB(float *pa, float *pb){
    float save = *pa;
    *pa = *pb;
    *pb = save;
}

void troca_apontadores(float **ppa, float **ppb){
    float *save = *ppa;
    *ppa = *ppb;
    *ppb = save;
}

int main(){
    float a, b;
    float *pa = &a, *pb = &b;

    printf("Digite 2 valores:\n");
    ler_valores(pa,pb);

    printf("\nImpressao de valores:\n");
    imp_valores(a,b,pa,pb);

    printf("\n\nTroca de valores a e b:\n");
    troca_valoresAB(pa,pb);
    imp_valores(a,b,pa,pb);

    printf("\n\nTroca de valores a e b:\n");
    troca_apontadores(&pa,&pb);
    imp_valores(a,b,pa,pb);
}