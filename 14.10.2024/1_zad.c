#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int sorted = 0;
    for(int i = 0; i < size - 1 && !sorted; i++) {
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = 0;
            }
        }
    }
}

int main(void) {
    int arr[5];
    int size = 5;
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array before sorting:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    bubbleSort(arr, 5);
    printf("\nThe array after sorting:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}