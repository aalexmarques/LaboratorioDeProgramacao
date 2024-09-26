#include <stdio.h>
#include <string.h>

void main() {
    char s1[80], s2[80];

    printf("Escreva uma string: ");
    scanf("%s", s1);

    printf("Escreva outra string: ");
    scanf("%s", s2);

    printf("comprimentos: %d %d\n", strlen(s1), strlen(s2));

    if (strcmp(s1, s2) == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }

    strcat(s1, " ");
    strcat(s1, s2);

    puts(s1);

    strcpy(s1, "Isto é um teste\n");
    printf(s1);

    if (strchr(s2, 'i') != NULL) {
        printf("i está em %s\n", s2);
    }

    if (strstr(s1, "to") != NULL) {
        printf("to encontrado em: %s", s1);
    }
}´
#include <stdio.h>
int main(){
    
}