#include <stdio.h>
#define PI 3.141593

void CalculaAreaCirculo(){
	float raio, area;
	printf("\nInsira o valor do raio: ");
	scanf("%f", &raio);
	area = PI * raio*raio;
	printf("Area = %.2f\n", area);
}

void CalculaAreaRetangulo() {
	float altura, comp, area;
	printf("\nInsira o valor da altura: ");
	scanf("%f", &altura);
	printf("Insira o valor do comprimento: ");
	scanf("%f", &comp);
	area = altura*comp;
	printf("Area = %.2f\n", area);
}

main() {
	char figura;
	printf("Insira o nome da figura (C)irculo / (R)etangulo: ");
	scanf("%c", &figura);
	if (figura=='C' || figura=='c') {
		CalculaAreaCirculo();
	}
	else 
		if (figura == 'R' || figura == 'r') {
			CalculaAreaRetangulo();
	}
}