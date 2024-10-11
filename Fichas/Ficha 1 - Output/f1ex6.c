#include <stdio.h>

int main(){
    float a,b,c,media,desvio;
    printf("Introduza os valores [a,b,c]: ");
    scanf("%f,%f,%f",&a,&b,&c);
    media = (a+b+c)/3;

    printf("Media de %f,%f,%f = %f\n",a,b,c,media);
    printf("Desvio em relacao a media de a=%f,b=%f,c=%f",a-media,b-media,c-media);
}