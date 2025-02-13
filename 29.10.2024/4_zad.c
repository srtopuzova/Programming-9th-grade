#include <stdio.h>

#define COMMAND(NAME, TYPE) NAME ## _ ## TYPE ## _command

#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, internal) {
    printf("This is the internal quit command.\n");
}

DEFINE_COMMAND(start, external) {
    printf("This is the external start command\n");
}

int main(void) {
    quit_internal_command();
    start_external_command();
}