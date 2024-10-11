#include <stdio.h>

int main(){
    printf("Char: %d Byte \nInt: %d Bytes\nFloat: %d Bytes\nDouble: %d Bytes",sizeof(char),sizeof(int),sizeof(float),sizeof(double));
    int a = 1;
    printf("\nOperador sizeof utilizado numa varia'vel com valor %d.\nSizeof a: %d Bytes",a,sizeof(a));
}