#include <stdio.h>
int main(){
    int l, c;

    for (l = 1; l <= 10; l++){
        for (c = 1; c <= l; c++){
            printf("%d ",c);
        }
        printf("\n");
    }


    return 0;
}