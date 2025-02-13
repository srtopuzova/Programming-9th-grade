#include <stdio.h>
#include "transformation.h"

int main(void) {
    char arr1[] = "-735";
    char arr2[] = "123abc456";
    char arr3[] = "abc";
    struct Transformation result1 = func(arr1);
    struct Transformation result2 = func(arr2);
    struct Transformation result3 = func(arr3);
    printf("Input: %s, \nResult: %ld, Error: %s \n", arr1, result1.result, result1.error);
    printf("Input: %s, \nResult: %ld, Error: %s \n", arr2, result2.result, result2.error);
    printf("Input: %s, \nResult: %ld, Error: %s \n", arr3, result3.result, result3.error);
}