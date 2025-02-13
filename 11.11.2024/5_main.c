#include <stdio.h>
#include "maths.h"

int main(void) {
    int num = 10;
    long answer = factoriel(num);
    if(num < 0) {
        printf("Factoriel can't be calculated for negative numbers. \n");
    }
    else {
        printf("The answer is: %ld \n", answer);
    }
}