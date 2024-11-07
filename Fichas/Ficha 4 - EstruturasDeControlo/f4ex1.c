#include <stdio.h>

int main(){
    int i = 1;
    
    //while
    
    printf("while:   ");
    while(i<=10){
        printf("%d ",i++);
    }
    printf("\n");

    //do while
    i = 1;
    printf("do-while: ");
    do{
        printf("%d ",i++);
    } while ( i <= 10);
    printf("\n");

    //for 

    printf("for:    ");
    for(i = 1; i <=  10; i++){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}