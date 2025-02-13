#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

#define SQUARE(INDEX) (1 << (INDEX))

int main(void) {
    #if defined (ARRAY_SIZE) && (ARRAY_SIZE > 0 && ARRAY_SIZE < 11)
    int arr[ARRAY_SIZE];
    for(int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = SQUARE(i);
    }
    printf("The array: \n");
    for(int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d \n", arr[i]);
    }
    #else 
        printf("This array size is not supported by the program. \n");
    #endif
}