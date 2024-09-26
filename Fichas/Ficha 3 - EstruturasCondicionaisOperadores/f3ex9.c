#include <stdio.h>

int main(){
    int peso;
    scanf("%d",&peso);
    if (peso<=40){
        printf("anoretico");
    }else if(peso<=50){
        printf("es lingrinhas");
    }else if(peso<=65){
        printf("tas top");
    }else if(peso<=80){
        printf("obeso");
    }else{
        printf("es tan gordo quanto a tua mae");
    }
        
    return 0;
}




















