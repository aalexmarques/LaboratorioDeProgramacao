#include <stdio.h>
int main(){
    char ch, *pch;
    int a, b, *pa,*pb; 
    printf("Introduza o caracter: ");
    scanf("%c",&ch);
    printf("Introduza dois inteiros: ");
    scanf("%d %d",&a,&b);
    pa = &a;
    pb = &b;
    pch = &ch;
    printf("- O endereco de ch = %p\n", &ch);
    printf("- O endereco de pch = %p\n", &pch);
    printf("- O conteudo de ch = %p\n", pch);
    printf("- O valor apontado por pch = %c\n", *pch);
    printf("- Os enderecos de a e b = %p e %p\n",&a,&b);
    printf("- Os enderecos de pa e pb = %p e %p\n",&pa,&pb);
    printf("- Os conteudos de pa e pb = %p e %p\n",pa,pb);
    printf("- O valores apontados por pa e pb = %d e %d\n",*pa,*pb);
}