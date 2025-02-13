#include <stdio.h>
#include <math.h>

int main(void) {
    long arr[5] = {2, 5, 7, 1, 0};
    for(int i = 0; i < 5; i++) {
        arr[i] = pow(arr[i], 4);
    }
    printf("The new array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%ld ", arr[i]);
    }
    printf("\n");
}