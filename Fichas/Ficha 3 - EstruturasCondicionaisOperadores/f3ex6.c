#include <stdio.h>

int main(){
    float t;
    printf("Introduza a temperatura: ");
    scanf("%f",&t);
    printf("O tempo está ");
    if (t <= 10) {
        printf("Muito Frio");
    }else if(t <= 20){
        printf("Frio");
    }else if(t <= 25){
        printf("Ameno");
    }else if(t <= 30){
        printf("Quente");
    }else{
        printf("Muito Quente");
    }
}