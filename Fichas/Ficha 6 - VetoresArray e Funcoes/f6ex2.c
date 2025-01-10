#include <stdio.h>
#define MESES 12

void ler_salarios(float salarios[]){
    for(int i = 0; i < MESES; i++){
        printf("Salario do mes %02d: ", i+1);
        scanf("%f",&salarios[i]);
    }
}

void mostra_salarios(float salarios[]){
    printf("\n\nMes\tSalario\n--------------\n");
    for(int i = 0; i < MESES; i++){
        printf("%02d\t%.2f\n",i+1,salarios[i]);
    }
    printf("--------------\n");
}

float somar_salarios(float salarios[]){
    float totalSalarios = 0;
    for(int i = 0; i < MESES; i++)
        totalSalarios += salarios[i];
    return totalSalarios;
}

int main(){
    float salarios[MESES];
    ler_salarios(salarios);
    mostra_salarios(salarios);
    printf("Total %.2f",somar_salarios(salarios));
    
}