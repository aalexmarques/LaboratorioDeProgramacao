#include <stdio.h>
#define MESES 12

int main(){
    float salarios[MESES];
    float totalSalarios = 0;
    for(int i = 0; i < MESES; i++){
        printf("Salario do mes %02d: ", i+1);
        scanf("%f",&salarios[i]);
    }
    printf("\n\nMes\tSalario\n--------------\n");
    for(int i = 0; i < MESES; i++){
        printf("%02d\t%.2f\n",i+1,salarios[i]);
        totalSalarios += salarios[i];
    }
    printf("--------------\nTotal %.2f",totalSalarios);
}

















/*

#include <stdio.h>
#include <math.h>

int main(){
    float arraySalarios[12], total = 0;
    int m;//mes

    for(m=0;m<12;m++){
        printf("Salario do mes %02d: ",m + 1 );
        scanf("%f",&arraySalarios[m]);
        printf("\n");
    }

    printf("\nMes    Salario\n--------------\n");
    for(m=0;m<12;m++){
        printf("%d    %.2f\n", m+1, arraySalarios[m]);

        total+= arraySalarios[m];
    }
    printf("--------------\nTotal %.2f",total);
}
*/