#include <stdio.h>

#define ARR_SIZE 5

int main(void) {
    int arr[ARR_SIZE] = {1, 2, 3, 4, 5};
    for(int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
}