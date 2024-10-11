#include <stdio.h>

int main(){
    float salario;
    printf("Introduza o valor do salario: ");
    scanf("%f",&salario);
    if (salario < 400){
        salario += 100;
    }
    printf("Salario: %.0f euro", salario);
}