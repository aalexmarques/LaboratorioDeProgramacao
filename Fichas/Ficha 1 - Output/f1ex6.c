#include <stdio.h>

int main(){
    float a,b,c;
    printf("Introduza os valores [a,b,c]: ");
    scanf("%f,%f,%f",&a,&b,&c);
    float media = (a+b+c)/3;
    float desvA = a - media;
    float desvB = b - media;
    float desvC = c - media;
    printf("Media de %f, %f, %f = %f\nDesvio em relacao a media e a=%f, b=%f, c=%f",a,b,c,media,desvA,desvB,desvC);   
    return 0;
}