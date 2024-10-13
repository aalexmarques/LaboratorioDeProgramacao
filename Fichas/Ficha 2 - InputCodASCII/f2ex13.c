#include <stdio.h>

int main(){
    int num1,num2;
    char c;
    printf("Escolha um operador:\n +) adicao\n -) subtracao\n *) multiplicacao\n /) divisao\nOperador: ");
    c = getchar();
    
    printf("Introduza 2 numeros inteiros [num1 , num2 ]: ");
    scanf("%d,%d",&num1,&num2);

    if (c == '+')
    {
        printf("%d / %d = %d",num1,num2,num1/num2);
    }else if (c == '-')
    {
        printf("%d - %d = %d",num1,num2,num1-num2);
    }else if (c == '*')
    {
        printf("%d * %d = %d",num1,num2,num1*num2);
    }else if (c == '/')
    {
        printf("%d / %d = %d",num1,num2,num1/num2);
    }
    
    


}
