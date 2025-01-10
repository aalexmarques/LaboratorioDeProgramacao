#include <stdio.h>
#define NMAX 50

void ler_vetor(int *v, int max){
    for(int i = 0; i < max; i++){
        printf("%d: ", i+1);
        scanf("%d", &v[i]);
    }
}
 
void print_vetor(int *v, int max){
    for(int i = 0; i < max; i++){
        printf(" %d", v[i]);
    }
}

void trocar_Valores(int *pA, int *pB){
    int save = *pA;
    *pA = *pB;
    *pB = save;
}

void troca_vetor(int *v1, int *v2, int max){
    int *pi, *pj;
    for(pi = v1, pj = v2; pi < v1 + max; pi++, pj++){
        trocar_Valores(pi,pj);
    }
}

int main(){
    int v1[NMAX], v2[NMAX], n;
    printf("Quantidade de valores a ler [max:50]: ");
    scanf("%d",&n);
    printf("Introduza o vetor 1:\n");
    ler_vetor(v1, n);
    printf("Introduza o vetor 2:\n");
    ler_vetor(v2, n);
    printf("- Antes de trocar:\n");
    printf("- v1: "); print_vetor(v1,n);
    printf("\n- v2: "); print_vetor(v2,n);
    printf("\nTrocados:"); troca_vetor(v1,v2,n);
    printf("\n- v1: "); print_vetor(v1,n);
    printf("\n- v2: "); print_vetor(v2,n);
}










/*
#include <stdio.h>
#define NMAX 50

void ler_vetor(int *v, int max){
    int i;
    for (i = 0; i < max; i++){
        printf("%d: ", i + 1);
        scanf("%d", &v[i]); // Corrected scanf to read a single integer
    }
}

void print_vetor(int *v, int max){
    int i;
    for (i = 0; i < max; i++){
        printf("%d ", *(v + i));
    }
    printf("\n");
}

void trocar_valores(int *pA, int *pB){
    int save = *pA;
    *pA = *pB;
    *pB = save;
}

void troca_vetor(int *v1, int *v2, int max){
    int *pi, *pj;
    
    for (pi = v1, pj = v2; pi < v1 + max; pi++, pj++){
        trocar_valores(pi, pj); // Corrected to swap elements pointed by pi and pj
    }
}

int main(){
    int vetor1[NMAX], vetor2[NMAX], tmn;

    do{
        printf("Quantidade de valores a ler [max: 50]: ");
        scanf("%d", &tmn);
    } while (tmn >= NMAX);

    printf("Introduza o vetor 1:\n");
    ler_vetor(vetor1, tmn);
    printf("Introduza o vetor 2:\n");
    ler_vetor(vetor2, tmn);

    printf("- Antes da troca:\n - v1: ");
    print_vetor(vetor1, tmn);
    printf("- v2: ");
    print_vetor(vetor2, tmn);

    troca_vetor(vetor1, vetor2, tmn);

    printf("- Depois da troca:\n - v1: ");
    print_vetor(vetor1, tmn);
    printf("- v2: ");
    print_vetor(vetor2, tmn);

    return 0;
}
*/