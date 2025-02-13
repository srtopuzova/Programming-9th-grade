#include <stdio.h>
#include "mystrings.h"

int strlength(char str[]) {
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }
    return length;
}

void strconcat(char first_str[], char second_str[]) {
    int length1 = strlength(first_str);
    int i = 0;
    while(second_str[i] != '\0') {
        first_str[length1 + i] = second_str[i];
        i++;
    }
    first_str[length1 + i] = '\0';
}

int strcompare(char str1[], char str2[]) {
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] < str2[i]) {
            return -1;
        } else if(str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if(str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}