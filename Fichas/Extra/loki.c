#include <stdio.h>

#include <string.h>

#define MAX_STR 30

void reverseString(char *str) {

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {

        char temp = str[i];

        str[i] = str[len - 1 - i];

        str[len - 1 - i] = temp;

    }

}

int main(){

char str[MAX_STR];

printf("Insert a  sentence:");

gets(str);

reverseString(str);

printf("Reversed sentence: %s\n", str);

return 0;

}