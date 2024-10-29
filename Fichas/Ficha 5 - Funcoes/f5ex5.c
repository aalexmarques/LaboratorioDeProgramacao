#include <stdio.h>
#include <math.h>
    void deterExp(float base, int expoente){ //determinar expoente
        int i;
        float total = 1;
            for (i = 1; i <= abs(expoente); i++){
            total *= base;
        }
        if(expoente < 0){
            total = 1/total;
        }

        printf("Resultado de %.2f^%d: %f",base,expoente,total);
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