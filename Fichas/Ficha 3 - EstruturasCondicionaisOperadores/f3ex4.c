#include <stdio.h>

int main(){
    int n;
    printf("Introduza um numero inteiro: ");
    scanf("%d",n);
    if(10 <= n && n <= 50){
        printf("\n- O numero %d pertence ao intervalo [10; 50]");
    }else{
        printf("\n- O numero %d nao pertence ao intervalo [10; 50]");
    }
}