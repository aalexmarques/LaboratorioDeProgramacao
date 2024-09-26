/*
#include <stdio.h>
#define NMAX 100

int intrLerNumeros(int *numeros){
    int *pi; //apontador i :D 
    printf("# Introduza valores ente [0;50]\n"); // 0 <= n && n <= 50
    for(pi = numeros; pi < numeros + NMAX; pi++){
        printf("- numeros[%d]: ", pi - numeros);
        scanf("%d",pi);
        if(*pi < 0 || * pi > 50);
            break;
    }
    return pi - numeros;
}

int *maximo(int *numeros, int nLidos){
    int *pmax = numeros;
    int *pi = numeros+1;
    if(nLidos == 0)
        return NULL;
}

int main(){
    int numeros[MAX];

    
}
*/

#include <stdio.h>
#define MAX 100

int ler_valores(int *v) {
	int *pi;
	for (pi = v; pi < v + MAX; pi++) {
		printf("- Numero[%02d]: ", pi - v + 1);
		scanf_s("%d", pi);
		if (*pi < 0 || *pi > 50)
			break;
	}
	return pi - v;
}

int* maximo(int *v, int lim) {
	int *pi, *pmax = v;
	if (lim == 0)
		return NULL;
	if (lim == 1)
		return v;

	for (pi = v + 1; pi < v + lim; pi++)
		if (*pi >= *pmax)
			pmax = pi;
	return pmax;
}

int *minimo(int *v, int lim) {
	int *pi, *pmin = v;
	if (lim == 0)
		return NULL;
	if (lim == 1)
		return v;

	for (pi = v + 1; pi < v + lim; pi++)
		if (*pi <= *pmin)
			pmin = pi;
	return pmin;
}

int diferenca(int *min, int *max) {
	return *max - *min;
}

void mostrar_numeros(int* v, int lim) {
	int* pi = v;
	printf("# Numeros inseridos:\n");
	while (pi < v + lim) {
		printf("- Numero[%02d] - %d\n", pi - v + 1, *pi);
		pi++;
	}
}

void mostrar_entre(int *inicio, int *fim) {
	int* pi;
	if (inicio >= fim - 1) return;
	pi = inicio + 1;
	printf("# valores entre min/max:\n");
	while (pi < fim) {
		printf(" - numeros %d\n", *pi);
		pi++;
	}
}

int main() {
	int *num[MAX], lidos;
	int *pmin, *pmax;
	printf("Insira numeros entre [0 a 50]:\n");
	lidos = ler_valores(num);

	if (lidos != 0)
	{
		mostrar_numeros(num, lidos);

		pmin = minimo(num, lidos);
		printf("# minimo (indice: %d): %d\n", pmin - num, *pmin);

		pmax = maximo(num, lidos);
		printf("# maximo (indice: %d): %d\n", pmax - num, *pmax);

		printf("# Diferenca entre min/max: %d\n", diferenca(pmin, pmax));

		if (pmin < pmax)
			mostrar_entre(pmin, pmax);
		if (pmin > pmax)
			mostrar_entre(pmax, pmin);
	}
	else
		printf("Nao foram inseridos numeros validos.");
}