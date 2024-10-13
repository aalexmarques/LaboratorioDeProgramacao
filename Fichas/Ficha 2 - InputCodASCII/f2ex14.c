#include <stdio.h>
#include <math.h>

int main(){
    int num1,num2;
    printf("Introduza dois valores: ");
    scanf("%d %d",&num1,&num2);
    printf("A divisao inteira = %d", num1/num2);
    printf("\nA divisao real = %.1f", (float)(num1)/num2);
    printf("\nO resto da divisao = %d", 17%5);
    printf("\nO raiz quadrada da soma dos dois valores = %.2f", sqrt(num1+num2));
    printf("\nO primeiro valor incrementado = %d",++num1);
    printf("\nO segundo valor decerementado = %d",--num2);
}