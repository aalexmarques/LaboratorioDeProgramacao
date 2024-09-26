#include <stdio.h>
#define MaxLength 100

int ler(int vetor[]){
    int i=0, valor;
    printf("Introduza valores inteiros [< 0 para terminar]:\n");
    do{
        scanf("%d",&valor);
        if(0 <= valor && valor <= 50)
            vetor[i++] = valor;
    }while(0 <= valor && i<=MaxLength);
    return i;
}

int valorMinimo(int vetor[], int tam){
    int i = 0, min = 0;
    for (i = 1; i < tam; i++){
        if(vetor[i] < vetor[min])
            min = i;
    }
    return min;
}

int valorMaximo(int vetor[], int tam){
    int i, max = 0;
    for (i = 1; i < tam; i++){
        if(vetor[i] > vetor[max])
            max = i;
    }
    return max;
}

void difMaxMin(int vetor[], int tam){
    printf("A diferenca entre o *Valor Maximo = %d* e o *Valor Minimo = %d* é %d\n", vetor[valorMaximo(vetor,tam)], vetor[valorMinimo(vetor,tam)], (vetor[valorMaximo(vetor,tam)] - vetor[valorMinimo(vetor,tam)]));
}

void impValores(int vetor[], int tam){
    int i;
    for(i = 0; i<tam; i++) printf("%d\n", vetor[i]);    
}


int main(){
    int vetorNums[MaxLength], tamanhoReal, pmin, pmax;
    tamanhoReal = ler(vetorNums);
    //printf("\n\nTamano real %d\n\n", tamanhoReal);
    printf("\n\nValor Minimo %d\n\n", valorMinimo(vetorNums, tamanhoReal));
    /*
    pmin = valorMinimo(vetorNums, tamanhoReal);
    pmax = valorMaximo(vetorNums, tamanhoReal);
    */
    difMaxMin(vetorNums, tamanhoReal);
    impValores(vetorNums, tamanhoReal);
}