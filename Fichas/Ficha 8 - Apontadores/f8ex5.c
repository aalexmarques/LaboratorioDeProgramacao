#include <stdio.h>

void trocar_Valores(int *pA, int *pB){
    int save = *pA;
    *pA = *pB;
    *pB = save;
    save = NULL;
}

int main(){
    int a, b;
    printf("valor de a: "); scanf("%d",&a);
    printf("valor de b: "); scanf("%d",&b);
    trocar_Valores(&a,&b);
    printf("# trocados - a = %d, b = %d",a,b);
}