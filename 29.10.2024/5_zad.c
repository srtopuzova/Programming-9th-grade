#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE temp = A;\
    A = B;\
    B = temp;

int main(void) {
    float a = 5.3, b = 3.1;
    SWAP(a, b, float)
    printf("a -> %.2f b -> %.2f\n", a, b);
}