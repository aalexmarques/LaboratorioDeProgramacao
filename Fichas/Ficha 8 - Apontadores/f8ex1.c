#include <stdio.h>

int main(){
    char ch = 'a';

    char p1 = &ch; //p1 não é um pointer
    char *p2 = ch; //ch não é um endereço 
    char *p3 = 'A'; // 'A' não é um endereço
    double *p4 = &ch; // está errado o ch não é double o data type tem de ser igual
    char *p5 = &ch; // está correto 👍
}