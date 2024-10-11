#include <stdio.h>

float potencia(float base, int expoente){
    float pot = 1;
    int exp = expoente < 0 ? -expoente : expoente; // Usar valor absoluto do expoente
    for (int i = 1; i <= exp; i++){
        pot *= base;
    }
    if (expoente < 0) {
        pot = 1 / pot; // Tomar o inverso se o expoente for negativo
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
    printf("Resultado de %.2f^%d: %.3f\n", b, e, potencia(b, e));
}