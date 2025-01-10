#include <stdio.h>

double factorial(int n){
    double sum=1;
    for(int i = 1; i<=n; i++){
        sum*=i;
    }
    return sum;
}

double combinacoes(int n, int p){
    return factorial(n)/(factorial(n-p)*factorial(p));
}

int main(){
    double totoloto = combinacoes(49,6);
    printf("Totoloto %.0f\n", totoloto);
    
    double euromilhoes = combinacoes(50,5) * combinacoes(11,2);
    printf("Euromilhoes %.0f\n", euromilhoes);
}