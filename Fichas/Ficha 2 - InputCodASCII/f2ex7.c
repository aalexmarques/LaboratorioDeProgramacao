#include <stdio.h>

int main(){
    int a,b,c,temp;

    printf("Introduza tres valores: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a == 0 || b == 0 || c == 0){
        printf("Um dos valores é 0");
    }else{
        if (a>b){
            temp = a;
            a = b;
            b = temp;
        }else if(a>c){
            temp = a;
            a = c;
            c = temp;
        }else if(b>c){
            temp = b;
            b = c;
            c = temp;
        }
        printf("Valores em ordem crescente: %d %d %d\n", a, b, c);
    }
    return 0;
}