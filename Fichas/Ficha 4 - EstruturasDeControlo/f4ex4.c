#include <stdio.h>

int main(){
    float num, menor, maior;
    printf("Introduza um numero real: ");
    fseek(stdin, 0, SEEK_END);
    scanf("%f",&num);
    menor = num;
    maior = num;
    while(num>=0){
        printf("Introduza um numero real: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%f",&num);
        if(num>=0){
            if(num>maior) maior = num;
            if(menor>num) menor = num;
        }
        if(num<0) printf("----------------------");
    }
    printf("Menor = %.2f, Maior = %.2f",menor,maior);
}   


