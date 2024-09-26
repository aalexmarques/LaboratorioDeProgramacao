#include <stdio.h>

int eletra(char car){
    return (('A' <= car && car <= 'Z') || ('a' <= car && car <= 'z')); 
}

int evogal(char car){
    return (eletra(car) && (car == 'a' || car == 'A' || car == 'e' || car == 'E' || car == 'i' || car == 'I' || car == 'o' || car == 'O' || car == 'u' || car == 'U'));
}

int econsoante(char car){
    return ((eletra(car) && !evogal(car)));
}

int edigitio(char car){
    return ("0" <= car && car <= "9");
}

int checkAlfanumerico(char car){
    return (eletra(car) || edigitio(car));
}

int main(){
    char car;
    printf("Insira um caracter: ");
    scanf(" %c", &car);

    printf("\n'%c' ",car); 
    if(evogal(car)){
        printf("e' vogal\n");
    }else printf("nao e' vogal\n");

    printf("'%c' ",car);
    if(econsoante(car)){
        printf("e' consoante\n");
    }else printf("nao e' consoante\n");

    printf("'%c' ",car); 
    if(checkAlfanumerico(car)){
        printf("e' alfanumerico");
    }else printf("nao e' alfanumerico");
}
