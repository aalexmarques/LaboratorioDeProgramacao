#include <stdio.h>

int main(){
    short int v[4] = {20 , 30, 50, 10};
    short int *pv;
    short int **pp;
    
    /*a) Qual o conjunto de instruções que escreveria, de tal modo que as 
    três variáveis ficassem, de alguma forma, ligadas entre si?*/

    pv = v; //este apontador agora aponta para o primeiro endereço do vetor v
    pp = &pv; //este apontador aponta par a o endereço do apontador do vetor v

    //Apresente um esquema de memória possível para o estado em que 
    //ficou a memória depois de executadas as instruções da alínea anterior.

    printf("%p %p %p",&v,*(pp+1),*(pp+3));

    /*
        *v [20] %d            *pv [20] %d           *pp [0x05ffe90] %p
        *v+1 [21] %d          pv [0x05ffe90] %p     **pp [20] %d
        *(v+1) [30] %d        *pv+1 [21] %d         **pp-1 [19] %d
        *(v+2) [50] %d        *(pv+1) [30] %d       *(*pp+1) [30] %d
        v [0x05ffe90] %p      ++*pv [21] %d         pp+1 [0x05ffe90] %p
        v+1 [0x05ffe92] %p    *pv++ [20] %d         *(pp+1) pv não é um vetor ent não dá nada com valor
        v[2] [50] %d          pv++ [0x05ffe90] %p   **pp+1 [21]
        v+3 [0x05ffe96] %p    ++pv [0x05ffe92] %p   9 pv não é um vetor ent não dá nada com valor
    */
}