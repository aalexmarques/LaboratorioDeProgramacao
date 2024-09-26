#include <stdio.h>
int main(){
    int h,m,s;
    printf("Insira a hora [hh:mm:ss]: ");
    scanf("%d:%d:%d",&h,&m,&s);
    printf("Total: %d segundos",60*(h*60+m)+s);
    
}