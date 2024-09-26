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
#include <stdio.h>


int main(){
    int tab1[]={1,4,5,9,10,90,100,400,500,900,1000};

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
}

