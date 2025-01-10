#include <stdio.h>
#define MAX 39999
#define MIN 1
#define TABSIZE 13
int intrevalo(int n){

}

int main(){
    int tab1[TABSIZE] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};

    char *tab2[TABSIZE] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
        // o * está em indicar que é um vetor de apontadores e cada posição é um apontador para aquela string
    int num, naux;

    do{
    printf("Introduza um numero: ");
    scanf("%d", &num);
    if(num < MIN ||  num > MAX){
        printf("O numero que introduziu não está dentro do intervalo [1;39999]");
    }
    }while(num < MIN ||  num > MAX);
    //1999 -> M CM XC IX

    int k = TABSIZE-1;
    while (k>=0){
        naux = num / tab1[k]; //determina quantas vezes um numero romano cabe em NUM
        for (int i = 0; i < naux; i++)
            printf("%s", tab2[k]);
        num %= tab1[k]; //reduz o numero para o resto            
        k--;
    }

    return 0;
}




/*
#include <stdio.h>

int main(){
    int tab[]={1,4,5,9,10,90,100,400,500,900,1000};

    //vetor de caracters //string __//vetor de strings__ neste caso
    //apontador par o primeiro elemento da string 
    char *tab2[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    //esta a apontar para o endereço de cada uma das primeiras posições de cada vetor de caracters

    do{
        printf("Digite um numero: ")
        scanf("%d", &num);
        if (num){

        }

    }while(num<0 || num > 3999);


}

*/
/*
#include <stdio.h>


int main(){
    int tab1[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};

    //vetor de caracters //string __//vetor de strings__ neste caso
    //apontador par o primeiro elemento da string 
    char *tab2[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    //esta a apontar para o endereço de cada uma das primeiras posições de cada vetor de caracters
    // o * está em indicar que é um vetor de apontadores

    //

    int i,k, num,naux;

    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num <0 || num > 3999){
            printf("Numero errado, tem que estar no intervalo [1; 3999]\n");
        }
    }while(num<0 || num > 3999);
 
    k = 12;
    while(k >=0){
        naux = num / tab [k];
        num = num % tab1[k];
        for ( i = 0; i < naux; i++){
            printf("%s", tab2[k]);
        }
        k = k-1;
    }

    //M CM XC IX
}

*/