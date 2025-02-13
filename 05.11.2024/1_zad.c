#include <stdio.h>

#define DEBUG

void func(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(i % 3 == 0) {
            sum += arr[i];
        }
    }
    #ifdef DEBUG
    printf("The sorted array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe elements: \n");
    for(int i = 0; i < 5; i += 3) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    #endif
    printf("The sum is %d \n", sum);
}

int main(void) {
    int arr[5] = {1, 5, 3, 8, 2};
    func(arr, 5);
}