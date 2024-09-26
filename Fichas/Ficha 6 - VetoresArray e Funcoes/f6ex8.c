#include <stdio.h>
#define MAXNUMEROS 50

void ler(int vNums[], int n){
    int i;
    for(i=0; i<n; i++){
        printf(" # Nº%d: ",i+1);
        scanf("%d",&vNums[i]);
    }
}

void imprimir(int vNums[], int n){
    int i;
    printf(" [");
    for(i=0; i<n; i++){
        /*
        //Condtion ? expr1 : expr2 //
        i<n-1 ? printf("%d, "); : printf("%d");
        */
        i<n-1 ? printf("%d, ",vNums[i]) : printf("%d",vNums[i]);
        /*
        If (i<n-1){
            printf("%d, ",vNums[i]);
            
        }else{
            printf("%d",vNums[i]);
        }
        */
        //printf("\n # Nº%d: %d",i+1,vNums[i]);
    }
    printf("]");
    //printf("]");
}

void trocar(int vNums1[], int vNums2[], int n){
    int i, hold;
    for(i=0;i<n;i++){
        hold = vNums1[i];
        vNums1[i] = vNums2[i];
        vNums2[i] = hold;
    }
}


int main(){
    int arrayDeNums[MAXNUMEROS], n, arrayDeNums2[MAXNUMEROS];

    printf("# Quantos numeros inteiros que serão lidos (<50): ");
    scanf("%d",&n);

    printf("Insira o numeros do vetor 1: \n");
    ler(arrayDeNums, n);
    printf("\nInsira o numeros do vetor 2: \n");
    ler(arrayDeNums2, n);

    printf("\n# Antes de trocar: \n");
    printf("- Vetor 1: ");
    imprimir(arrayDeNums, n);
    printf("\n- Vetor 2: ");
    imprimir(arrayDeNums2, n);
    
    printf("\n\n# Depois de trocar: \n");
    trocar(arrayDeNums,arrayDeNums2,n);
    printf("- Vetor 1: ");
    imprimir(arrayDeNums, n);
    printf("\n- Vetor 2: ");
    imprimir(arrayDeNums2, n);
}