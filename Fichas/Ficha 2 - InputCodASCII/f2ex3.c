#include <stdio.h>

int main(){
    int nTotalSegundos, h, m ,s;
    printf("Introduza o numero de segundos: ");
    scanf("%d", &nTotalSegundos);
    
    h = nTotalSegundos /3600;
    m = (nTotalSegundos % 3600) / 60;
    s = nTotalSegundos % 60;
    printf("h=%d, m=%d, s=%d",h, m ,s);

}