#include <stdio.h>
#include "mystrings.h"

int main(void) {
    printf("Enter a string (50 characters max): \n");
    char str[50];
    scanf("%49s", str);
    printf("The length of the string is: %d \n", strlength(str));
}