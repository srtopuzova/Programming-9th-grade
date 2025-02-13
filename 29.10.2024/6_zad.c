#include <stdio.h>

#define SWAP(A, B, TYPE) TYPE temp = A;\
    A = B;\
    B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) for(int i = 0; i < SIZE; i++) {\
    for(int j = i+1; j < SIZE; j++) {\
        if(ARRAY[j] COMPARE ARRAY[i]) {\
            SWAP(ARRAY[j], ARRAY[i], TYPE)\
        };\
    };\
};

int main(void) {
    float arr[5] = {5.1, 2.5, 6.3, 5.2, 1.4};
    SORT(arr, 5, float, <);
    printf("The sorted array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}