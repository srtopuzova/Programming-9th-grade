#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char **argv) {
    struct SafeResult a = safestrtoint(argv[1]);
    struct SafeResult b = safestrtoint(argv[2]);
    if (a.errorflag || b.errorflag) {
        print_error();
        return 1;
    }
    struct SafeResult result = safedivide(a.value, b.value);
    if (result.errorflag) {
        print_error();
    } else {
        printf("Safedivide result: %d \n", result.value);
    }
    return 0;
}
