#include <stdio.h>

int main(){
    float TP,EE,AC,NF;

    scanf(" %f %f %f",&TP,&EE,&AC);
    NF = (TP*0.3 + EE*0.5 + AC*0.2);

    if(NF >= 9.5){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }

    return 0;
}