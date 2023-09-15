#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x;

    x = 10;

    printf("x vaut: %d\n", x);

    //x = x+5;
    x += 5;
    printf("x vaut: %d\n", x);

    return EXIT_SUCCESS;
}
