#include <stdio.h>

float potencia(float base, int expoente){
    float pot = 1;
    for (int i=1; i<=expoente; i++){
        pot*= base;
    }
    return pot;
}

int main(){
    float b;
    int e;
    printf("Base: ");
    scanf("%f", &b);
    printf("Expoente: ");
    scanf("%d", &e);
    printf("Resultado de %.2f^%d: %f", b, e, potencia(b,e));
}