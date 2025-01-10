#include <stdio.h>

double potencia(double x, int n){
	 double pot;
	 int k;
	 pot = 1;
	 for(k=1; k<=n; k++) 
		 pot=pot*x;
	 return pot;
}

main(){
	double base;
	int exp;
	printf("Base = ");
	scanf("%lf", &base);
	printf("Expoente = ");
	scanf("%d", &exp);
	printf("%.2f^%d = %.2f\n", base, exp, potencia(base, exp));
}
