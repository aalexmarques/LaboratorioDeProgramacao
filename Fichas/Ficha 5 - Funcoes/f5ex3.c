#include <stdio.h>

    void deterExp(float base, signed short int expoente){ //determinar expoente
        int i;
        float total = 1;
        for (i = 1; i <= expoente; i++){
            total *= base;
        }
        printf("Resultado de %.2f^%d: %f",base,expoente,total);
    }

int main(){
    float base;
    signed short int expoente;
    
    printf("Base: ");
    scanf("%f",&base);
    printf("\nExpoente: ");
    scanf("%d",&expoente);

    deterExp(base,expoente);
}