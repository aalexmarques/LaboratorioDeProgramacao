#include <stdio.h>
#define NMaxElem 10

void lerVetor(float V[], int n){
    int i;
    for(i=0; i<=n-1; i++){
        printf("Escreva o valor do %dº elemento: ", i+1);
        scanf("%f", &V[i]);
    }
}

void Somarvetores(float A[], float B[], float S[], int n){
    int i;
    for(i=0; i<=n-1; i++) S[i]=A[i]+B[i];
}

void Mostrarvetor(float V[], int n){
    int i;
    for(i=0; i<=n-1; i++) printf("Valor do %dº elemento: %.2f\n", i+1, V[i]);
}

int Iguais(float A[], float B[], int n){
    int i=0;
    for(i=0; i<=n-1 && A[i]==B[i]; i++);
    return i==n;
}

void Copiarvetores(float A[], float B[], int n){
    int i;
    for(i=0; i<=n-1; i++) B[i]=A[i];
}

int main(){ /* bloco principal */
    float X[NMaxElem], Y[NMaxElem], Z[NMaxElem];
    int nelem; /*para facilitar admitimos que os 3 vetores
    guardam sempre o mesmo nº de elementos, caso contrário,
    precisávamos de 3 variáveis: nelem1, nelem2 e nelem3*/
    printf("Quantos elementos? "); scanf("%d", &nelem);
    if(nelem>NMaxElem) nelem=NMaxElem;

    printf("Leitura dos valores do vetor X\n");
    lerVetor(X, nelem);

    printf("Leitura dos valores do vetor Y\n");
    lerVetor(Y, nelem);
    Somarvetores(X, Y, Z, nelem);

    printf("Os valores do vetor soma são:\n");
    Mostrarvetor(Z, nelem);

    if (Iguais(X,Y,nelem)) printf("Os vetores são iguais\n");
    else{
        Copiarvetores(X,Y,nelem);
        printf("Os vetores ficaram iguais\n");
    
    }
    printf("vetor X\n"); Mostrarvetor(X,nelem);
    printf("vetor Y\n"); Mostrarvetor(Y,nelem);
}