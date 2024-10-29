#include <stdio.h>

    void deterExp(float base, int expoente){ //determinar expoente
        int i;
        float total = 1;
        for (i = 1; i <= expoente; i++){
            total *= base;
        }
        printf("Resultado de %.2f^%d: %.4f",base,expoente,total);
    }

int main(){
    float base;
    int expoente;
    
    printf("Base: ");
    scanf("%f",&base);
    printf("Expoente: ");
    scanf("%d",&expoente);

    deterExp(base,expoente);
}