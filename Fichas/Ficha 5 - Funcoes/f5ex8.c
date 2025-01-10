#include <stdio.h>
#include <math.h>

    double deterExp(double base, int expoente){ //determinar expoente
        int i;
        double total = 1;
        for (i = 1; i <= abs(expoente); i++){
            total *= base;
        }
        if(expoente < 0){
            total = 1/total;
        }

        return total;

    }

    double valorAtualLiquido(double v, double t, int ano){
        double sum = 0;
        for (int i = 1; i<=ano; i++){
            sum+=(v/deterExp(1+t,i));
        }
    return sum;
    }

int main(){
    double v,t; int n;
    printf("- Introduza o valor (v): ");
    scanf("%lf", &v);

    printf("Introduza a taxa (t): ");
    scanf("%lf", &t);

    printf("Introduza o numero de anos (n): ");
    scanf("%d", &n);

    double val = valorAtualLiquido(v,t,n);
    printf("Valor Atual Liquido (VAL): %.3lf",val);

}



/*
#include <stdio.h>


int main(){
    double base;
    int expoente;
    /*
    printf("Base: ");
    scanf("%f",&base);
    printf("Expoente: ");
    scanf("%d",&expoente);

    deterExp(base,expoente);
    */