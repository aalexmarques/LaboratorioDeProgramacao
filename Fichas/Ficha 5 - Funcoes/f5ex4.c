#include <stdio.h>

    void eramVinteAstericos(char tipoCar, int qtdCar){
        int i;
        for(i = 0; i<=qtdCar; i++){
            printf("%c", tipoCar);
        }
        printf("\n");
    }

int main(){
    char c; int n;

    printf("Char: ");
    scanf("%c",&c);
    printf("No Chars: ");
    scanf("%d",&n);
    printf("\n");
    
    eramVinteAstericos(c,n);
    printf("Bem-vindo\n");
    //printf("Numeros entre 1 e 5\n");
    eramVinteAstericos(c,n);
    /*int j;
    for (j = 1; j<=5; j++){
        printf("%d\n",j);
    }
    eramVinteAstericos(c,n);
    */
}