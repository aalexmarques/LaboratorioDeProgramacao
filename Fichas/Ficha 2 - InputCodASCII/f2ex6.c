#include <stdio.h>

int main(){
    int a, t;
    float s;
    printf("Aceleracao: ");
    scanf("%d",&a);
    printf("Intervalo de Tempo: ");
    scanf("%d",&t);
    s = (float)(a*t*t)/2;
    printf("Espaco perocorrido : %f",s);
}