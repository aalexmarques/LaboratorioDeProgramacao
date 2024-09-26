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
