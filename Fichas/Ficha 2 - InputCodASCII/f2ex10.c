#include <stdio.h>

int main(){
    int x,y;
    y = 4 + 3 * 2;
    printf("\ny = 4 + 3 * 2 -> %d",y);
    x = 3 * 4 / 2 - 2;
    printf("\nx = 3 * 4 / 2 - 2 -> %d",x);
    x = y++;
    printf("\nx = y++ : x -> %d, y -> %d",x,y);
    x += 3;
    printf("\nx += 3 -> %d",y);
    y -= 2;
    printf("\ny -= 2 -> %d",y);
    x /= 3;
    printf("\nx /= 3 -> %d",y);
    printf("\ny %= 3 -> %d",y %= 3);

    /*
        y = 4 + 3 * 2 -> 10
        x = 3 * 4 / 2 - 2 -> 4
        x = y++ : x -> 10, y -> 11
        x += 3 -> 11
        y -= 2 -> 9
        x /= 3 -> 9
        y %= 3 -> 0
    */
}