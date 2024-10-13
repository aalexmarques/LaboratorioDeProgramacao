#include <stdio.h>

int main(){
    float n;
    printf("Insira a nota: ");
    scanf("%f",&n);
    printf("Situacao: ");
    if(0 <= n < 9.5){
        printf("Reprovado");
        if(6.5 <= n){
            printf("\n- Tem direito a prova oral .");
        }
    }else if(9.5 <= n <= 20){
        printf("Aprovado");
    }else{
        printf("Nota invalida");
    }
    return 0;
}