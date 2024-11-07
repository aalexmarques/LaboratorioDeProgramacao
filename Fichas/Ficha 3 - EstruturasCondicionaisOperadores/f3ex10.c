#include <stdio.h>

int main(){

    int n;
    float abono;
    printf("Insira o numero de dependentes: ");
    scanf("%d",&n);
    printf("O abono mensal e': ");
    switch (n)
    {
    case 1: abono = 50; break;
    case 2: abono = 90.5; break;
    case 3: abono = 170.7; break;
    default: abono = (170.7 + (n-3)*20.3); break;
    }

    if(n == 0){
        printf("nulo");
    }else{
        printf("%.2f",abono);
    }

}