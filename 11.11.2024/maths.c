#include <stdio.h>
#include "maths.h"

long factoriel(int num) {
    if(num <= 0) {
        return 0;
    }
    long result = 1;
    for(int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}