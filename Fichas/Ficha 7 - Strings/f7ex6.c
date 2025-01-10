#include <stdio.h>
#define MAX 20

int mygets ( char *str , int lim) {
    int i = 0;
    while (( str[i] = getchar ()) != '\n' && i++ < lim - 1);
    str[i] = '\0';
    return i;
}

int main(){
    char s1[MAX],s2[MAX];
    int noS1, noS2;
    printf("Introduza as frases (1 por linha, max:20):\n");
    noS1 = mygets(s1,MAX);
    noS2 = mygets(s2,MAX);
    if (noS1 < noS2){
        printf("- Linha mais curta '%s' (%d char)",s1,noS1);
        printf("- Linha mais comprida '%s' (%d char)",s2,noS2);
    }else{
        printf("- Linha mais curta '%s' (%d char)",s2,noS2);
        printf("- Linha mais comprida '%s' (%d char)",s1,noS1);
    }
    

}