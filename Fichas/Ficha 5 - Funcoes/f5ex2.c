#include <stdio.h>

int /*void*/ multiploDe5(int n){ return n%5 == 0; } //da o output de 1 pq a condição é verdadeira
    
    //if(n%5 == 0) printf("%d e' multiplo de 5\n", n);
//}

int main(){
    int i;
    for(i=1;i<=100;i++){
        if (multiploDe5(i)){
            printf("%d e' multiplo de 5 ",i);
            printf("\n");
        }
    }
}