#include <stdio.h>
int main(){
    float pFabri, taxa, pMargem;
    printf("\nPreco de fabrico: ");
    scanf("%f",&pFabri);
    printf("\nTaxa (\%): ");
    scanf("%f",&taxa);
    printf("\nMargem Fornecedor (\%):");
    scanf("%f",&pMargem);
    float pVenda = pFabri*(1+(taxa/100)+(pMargem/100));
    printf("\nPreco de venda: %f",pVenda);
    return 0;
}