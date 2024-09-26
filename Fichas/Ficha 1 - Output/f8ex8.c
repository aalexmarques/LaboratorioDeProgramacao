#include <stdio.h>

void ler(float *pa, float *pb){
    printf("a: "); scanf("%f", pa);
    
    printf("b: "); scanf("%f", pb);
}

void imprimir(float a , float b, float *pa, float *pb){
    printf("Valor de a: %f \t Valor de b:%f\n Endereco de a:%p \t Endereco de b:%p\n Valor apontado de pa:%f \t Valor apontado de pb:%f", a, b, pa, pb, *pa, *pb);
}

void trocaValores(float a, float b, float *pa, float *pb){
    float aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}

void trocaApontadores(float a, float b, float *pa, float *pb){
    float aux;
    aux = *pa;
    *pa = *pb;
    *pb = aux;
}



int main(){
    float a, b;
    float *pa = &a, *pb = &b;
    printf("Insira os valores de *a* e *b*!\n");
    ler(pa,pb);
    imprimir(a,b,pa,pb);

}

