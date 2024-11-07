#include <stdio.h>

int main(){
    int peso;
    char sexo;
    printf("Qual é o seu sexo (m/f)? ");
    sexo = getchar();
    if(sexo == 'f'){
        scanf("%d",&peso);
        if (peso<=40){
            printf("Muito Magra");
        }else if(peso<=50){
            printf("Magra");
        }else if(peso<=65){
            printf("Saudavel");
        }else if(peso<=80){
            printf("Gorda");
        }else{
            printf("Muito gorda");
        }
    }else{
        scanf("%d",&peso);
        if (peso<=50){
            printf("Muito Magro");
        }else if(peso<=60){
            printf("Magro");
        }else if(peso<=80){
            printf("Saudavel");
        }else if(peso<=90){
            printf("Gordo");
        }else{
            printf("Muito gordo");
        }
    }
        
    return 0;
}




















