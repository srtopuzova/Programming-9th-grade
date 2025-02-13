#include <stdio.h>
#include "mystrings.h"

int main(void) {
    printf("Enter the first string (50 characters max): \n");
    char str1[50], str2[50];
    scanf("%49s", str1);
    printf("Enter the second string (50 characters max): \n");
    scanf("%49s", str2);
    int result = strcompare(str1, str2);
    printf("Comparison: %d \n", result);
}