#include <stdio.h>

void sort(int arr[], int size) {
    #ifdef _WIN32
    int sorted = 0;
    for(int i = 0; i < size - 1 && !sorted; i++) {
        sorted = 1;
        for(int j = 0; j < size - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = 0;
            }
        }
    }
    #elif defined __linux__
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    #elif defined __APPLE__
    for (int i = 1; i < size; ++i) {
        int el = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > el) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = el;
    }
    #else
    int start = 0;
    int end = size - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    #endif
}

int main(void) {
    int arr[5] = {1, 6, 2, 7, 3};
    sort(arr, 5);
    printf("The sorted array: \n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}