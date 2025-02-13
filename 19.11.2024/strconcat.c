#include <stdio.h>
#include "mystrings.h"

int main(void) {
    printf("The first string (50 characters max): \n");
    char str1[50], str2[50];
    scanf("%49s", str1);
    printf("The second string (50 characters max): \n");
    scanf("%49s", str2);
    strconcat(str1, str2);
    printf("The new string: %s \n", str1);
}