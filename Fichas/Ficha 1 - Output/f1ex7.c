#include <stdio.h>

int main(){
    float pf,t,pm,pv;
    printf("Preco de fabrico: ");
    scanf("%f",&pf);
    printf("Taxa (%%): ");
    scanf("%f",&t);
    printf("Margem Fornecedor (%%): ");
    scanf("%f",&pm);
    pv = pf * (1+t/100+pm/100);
    printf("Preco de venda: %f", pv);
}