#include <stdio.h>

#define DEBUGGER(VAR) printf("The value of " #VAR " is %d, " "the name of the file is %s and the line is %d.\n", VAR, __FILE__, __LINE__);

int main(void) {
    int random = 3;
    DEBUGGER(random)
}