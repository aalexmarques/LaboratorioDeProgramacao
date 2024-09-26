#include <stdio.h>
int main(){
    
    int num, pares = 0, mult5 = 0, lidos = 0;
    do{
        printf("Introduza um numero inteiro: ");
        fseek(stdin, 0, SEEK_END); //"limpa o scanf"
        scanf("%d",&num); //o espaco não funciona pq so da com caracters não com inteiros então usamos o fseek que sera posto antes do scanf
        printf("\n");
        if (num >=0){
            if(num%5 == 0) mult5++;
            if(num%2 == 0) pares++;
        }
    }while(num>=0 && lidos<10);
    /* não é a melhor opção fazer assim
    int i,nMultiDeCinco = 0,nPares = 0,n = 0;    
    for(i=0;i<=10 && n>=0;i++){
        printf("Introduza um numero inteiro: ");
        fseek(stdin, 0, SEEK_END); //"limpa o scanf"
        scanf("%d",&n); //o espaco não funciona pq so da com caracters não com inteiros então usamos o fseek que sera posto antes do scanf
        printf("\n");
        if(n%5 == 0) nMultiDeCinco++;
        if(n%2 == 0) nPares++;
    }
    */
    printf("Pares = %d, Multiplos de 5 = %d",pares,mult5);
}
