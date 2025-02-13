#include <stdio.h>
#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    result.errorflag = 0;
    if((b > 0 && a > (INT_MAX - b)) || (b < 0 && a < (INT_MIN - b))) {
        result.errorflag = 1;
    } else {
        result.value = a + b;
    }
    return result;
}

struct SafeResult safesubtract(int a, int b) {
    struct SafeResult result;
    result.errorflag = 0;
    if((b < 0 && a > (INT_MAX + b)) || (b > 0 && a < (INT_MIN + b))) {
        result.errorflag = 1;
    } else {
        result.value = a - b;
    }
    return result;
};

struct SafeResult safemultiply(int a, int b) {
    struct SafeResult result;
    result.errorflag = 0;
    if (a > 0 && (b > 0 && a > (INT_MAX / b)) || (b < 0 && a > (INT_MIN / b))) {
        result.errorflag = 1;
    } else if (a < 0 && (b > 0 && a < (INT_MIN / b)) || (b < 0 && a < (INT_MAX / b))) {
        result.errorflag = 1;
    } else {
        result.value = a * b;
    }
    return result;
};

struct SafeResult safedivide(int a, int b) {
    struct SafeResult result;
    result.errorflag = 0;
    if (b == 0 || (a == INT_MIN && b == -1)) {
        result.errorflag = 1;
    } else {
        result.value = a / b;
    }
    return result;
};

struct SafeResult safestrtoint(char str[]) {
    struct SafeResult result;
    result.errorflag = 0;
    result.value = 0;
    int i = 0, sign = 1;
    if(str[i] == '-') {
        sign = -1;
        i++;
    }
    while(str[i] != '\0') {
        if(str[i] >= '0' && str[i] <= '9') {
            result.value = result.value * 10 + (str[i] - '0');
        }
        else {
            result.errorflag = 1;
            return result;
        }
        i++;
    }
    if(sign == -1) {
        result.value *= sign;
    }
    return result;
};