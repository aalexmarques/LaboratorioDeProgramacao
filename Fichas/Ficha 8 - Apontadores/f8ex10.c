#include <stdio.h>
#define MAX 50
#define MIN 0

int inserir(int *arrayInts){
	int i = 0, num;
	do{
		printf("- No[%02d]: ",i+1);
		scanf("%d", &num);
		if(!(num >= 0 && num <= 50)) return i; 	
		arrayInts[i] = num;
		i++;
	}while(1);
}

void imprimir(int *arrayInts, int max){
	if (arrayInts != NULL){
		for(int i = 0; i < max; i++){
			printf("\n- No[%02d]: %d",i+1,arrayInts[i]);
		}
	}
}

int *valorMaisAlto(int *arrayInts,int max){
    if(max != 0){
		int *pmax = arrayInts;
		for (int i = 1; i < max; i++){
			if (*pmax <= arrayInts[i]) pmax = &arrayInts[i];
		}
		return pmax;
	}else return NULL;
}

int *valorMaisBaixo(int *arrayInts, int max){
    if(max != 0){
		int *pmin = arrayInts;
		for (int i = 1; i < max; i++){
			if (*pmin >= arrayInts[i]) pmin = &arrayInts[i];
		}
		return pmin;
	}else return NULL;
}

int difMinMax(int *min, int *max){
	return *max-*min;
}

void valoresEntreMinMax(int *inicio, int *fim){
	int *pi = inicio;
	while(pi <= fim){
		printf("\n- %d",*(pi++));
	}
}

int main(){
	int *arrayInts, *pvmax, *pvmin, max;

	printf("# Introduza valores ente [0;50]\n");

	max = inserir(arrayInts);

	if (max == 0) {
        printf("Nenhum valor valido foi inserido.\n");
        return 0;
    }

	pvmax = valorMaisAlto(arrayInts,max);
	pvmin = valorMaisBaixo(arrayInts,max);

	printf("\n# Min: %d\n# Max: %d",*pvmin,*pvmax);

	printf("\n\n# Diferenca entre min/max: %d\n", difMinMax(pvmin,pvmax));
	
	imprimir(arrayInts,max);

	printf("\n# Valores entre o valor minimo e maximo:");
	if(pvmin < pvmax){
		valoresEntreMinMax(pvmin,pvmax);
	}else if(pvmin > pvmax)
		valoresEntreMinMax(pvmax,pvmin);
}

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

/*
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

*/