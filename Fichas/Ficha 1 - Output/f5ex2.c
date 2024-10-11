#include <stdio .h>

int multiplo5 (int n) {
    if (n % 5 == 0)
        return 1;
    else
        return 0;
}

int main () {
    int num;
    for (num = 1; num <= 100; num ++) {
        if ( multiplo5 (num ))
            printf ("%d e' multiplo de 5\n", num);
    }
}