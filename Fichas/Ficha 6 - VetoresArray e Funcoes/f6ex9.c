#include <stdio.h>
#define tmnMAX 100

int confirmarLetras(){}
int confirmarMinusculas(){
    
} //valores boleanos
int confirmarMaisculuas(){}

int ler(char carc[]){
    int i,n;
    char c;
    i = 0;
    do{
        printf("# Letra N.%d: ", i+1);
        fseek(stdin, 0, SEEK_END); //"limpa o scanf" //so utilizado na insercao de caracters 
        scanf("%c",&c);
        if (('a' <= c && c <= 'z') || ('A' <= c && c <='Z')){
            carc[i] = c;
        }

    }while((i<=tmnMAX) && ('a' <= c && c <= 'z') || ('A' <= c && c <='Z'));
    return i;
}

void imprimir(char L[], int n){
    int i;
    printf("{");
    for (i = 0; i<n; i++){
        i<n-1 ? printf(" %d,",L[i]) : printf(" %d",L[i]);
    }
    printf("}");
}

void Minus(char L[],n){

}

void Mais()

void separar(char letras[], char lMais[], char lMinus[], int n){

}

int main(){
    char letras[tmnMAX], lMais[tmnMAX], lMinus[tmnMAX];
    int n;
    printf("Insira as letras: \n");
    n = ler(letras);

    printf("- Letras inseridas: "); imprimir(letras,n);
    
}