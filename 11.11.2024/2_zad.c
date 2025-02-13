#include <stdio.h>

int NOD(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long NOK(int a, int b) {
    return (a * b) / NOD(a, b);
}

int main(void) {
    int a = 6, b = 9;
    long answer = NOK(a, b);
    printf("The answer is: %ld \n", answer);
}