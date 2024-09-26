#include <stdio.h> 

int main(){
    unsigned short a = 3;
    char ch = 'b';
    float flt = 40.3;
    unsigned short b = 5;
    unsigned short *pa = &a;
    char *pch = &ch;
    float *pflt = &flt;
    printf("a:%d\n&a:%p\npa:%p\n*pa:%d\n&pa:%p\n,",a,&a,pa,*pa,&pa);
    printf("\n --- Diferente ---\n");
    pa++;
    printf("a:%d\n&a:%p\n++pa:%p\n*pa:%d\n&pa:%p,",a,&a,pa,*pa,&pa);
    
}