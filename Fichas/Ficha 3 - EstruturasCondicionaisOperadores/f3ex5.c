#include <stdio.h>
int main(){
    float f1,f2,f3,ef,n;
    printf("Insira an nota da ficha 1: ");
    scanf("%f",&f1);

    printf("\nInsira an nota da ficha 2: ");
    scanf("%f",&f2);

    printf("\nInsira an nota da ficha 3: ");
    scanf("%f",&f3);
    
    printf("\nInsira an nota do exame final: ");
    scanf("%f",&ef);

    n=0.2*(f1+f2+f3)+0.4*ef;
    printf("\nA nota final e: %.6f",n);
}
