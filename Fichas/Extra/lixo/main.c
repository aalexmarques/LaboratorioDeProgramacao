#include <stdio.h>
#include <stdlib.h>


void funcTeste(){
    printf("Ola mundo\n");
    exit(EXIT_FAILURE);
}

int main()
{
    printf("Antonio\n");
    funcTeste();
    printf("Pedro\n");
    return 0;
}
