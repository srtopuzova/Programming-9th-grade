#include <stdio.h>
#include "transformation.h"
#include <string.h>

struct Transformation func(char str[]) {
    struct Transformation result;
    result.result = 0;
    result.error[0] = '\0';
    int i = 0, sign = 1;
    if(str[i] == '-') {
        sign = -1;
        i++;
    }
    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9') {
            result.result = result.result * 10 + (str[i] - '0');
        }
        else {
            strcpy(result.error, "Invalid input string");
            result.result = 0;
            return result;
        }
        i++;
    }
    if(sign == -1) {
        result.result *= sign;
    }
    return result;
}

