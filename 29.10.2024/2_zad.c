#include <stdio.h>

#define COMPARISON(A, B) (A > B) ? printf("a is greater than b\n") : printf("b is greater than a\n");

int main(void) {
    int a = 3, b = 7;
    COMPARISON(a, b)
}