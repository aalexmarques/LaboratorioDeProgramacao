#include <stdio.h>
#define PI 3.14159265359

int main(){
    float r,a,p;
    printf("Introduza o raio da circunferencia: ");
    scanf("%f",&r);
    a = PI *r*r;
    p = 2*PI*r;
    printf("A area e': %f\nO perimetro e':%f",a,p);
}