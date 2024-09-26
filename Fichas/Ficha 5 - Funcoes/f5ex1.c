#include <stdio.h>

    void vinteAstericos(){
        printf("********************\n");
    }

int main(){
    vinteAstericos();
    printf("Numeros entre 1 e 5\n");
    vinteAstericos();
    int n;
    for (n = 1; n<=5; n++){
        printf("%d\n",n);
    }
    vinteAstericos();
}