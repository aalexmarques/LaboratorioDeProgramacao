#include <stdio.h>
#include "separaMinMai.h"
#define MAX 50

int minus(char c){
    return (c >= 'a' && c <= 'z') ? 1 : 0;
}

int maisc(char c){
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}


void separa_min_mai ( char *str , char *min , char *mai ){
    int i=0, minNum = 0, maiNum = 0;
    while (str[i] != '\0' && i < MAX){
        if (minus(str[i])){
            min[minNum++] = str[i];
        }else if(maisc(str[i])){
            mai[maiNum++] = str[i];
        }
        i++;
    }
    min[minNum] = '\0', mai[maiNum] = '\0';
}