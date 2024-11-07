#include <stdio.h>

int main(){
    int num, todos_positivos, todos_pares;
    todos_pares = 1;
    todos_positivos = 1;

    //fseek(stdin, 0, SEEK_END);
    do{
        printf("Introduza um numero inteiro (introduza o num 0 para terminar): ");
        scanf("%d",&num);
        if(num%2 != 0){
            todos_pares=0;
        }

        if(num < 0){
            todos_positivos=0;
        }

    }while(num!=0);

    printf("- Todos os numeros positivios: ");      
    if(todos_positivos){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
    printf("- Todos os numeros pares: ");
    if(todos_pares){
        printf("sim\n");
    }else{
        printf("nao\n");
    }
    
    

    /*menor = num;
    maior = num;
    while(num>=0){
        printf("Introduza um numero real: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%f",&num);
        if(num>=0){
            if(num>maior) maior = num;
            if(menor>num) menor = num;
        }
        if(num<0) printf("----------------------");
    }
    printf("Menor = %.2f, Maior = %.2f",menor,maior);
    */
}   


