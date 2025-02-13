#include <stdio.h>

#define SUM_SQUARE(A, B) ((A) + (B)) * ((A) + (B))

int main(void) {
    int a = 5, b = 3;
    int answer = SUM_SQUARE(a, b);
    printf("The answer is: %d \n", answer);
}