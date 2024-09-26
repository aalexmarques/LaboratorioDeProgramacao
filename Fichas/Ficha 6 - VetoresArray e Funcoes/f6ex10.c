#include <stdio.h>
#define MaxLength 1000


int lerValores(int arrayV[]){ 
    int nElementos, valor;
    nElementos = 0;
    do{
        scanf("%d", &valor);
        if (valor>0) arrayV[nElementos++] = valor;
    }while(nElementos<MaxLength && valor>0);
}

int imprimirValores(){

}

int escreverValores(){
    
}

int main(){
    int arrayValores[MaxLength];
    lerValores(arrayValores);
}