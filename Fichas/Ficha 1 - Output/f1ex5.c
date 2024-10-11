#include <stdio.h>

int main(){
    int hh,mm,ss;
    printf("Insira a hora [hh:mm:ss]: ");
    scanf("%d:%d:%d",&hh,&mm,&ss);
    printf("\nTotal: %d segundos", hh*60*60+mm*60+ss); 
}