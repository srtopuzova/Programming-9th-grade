#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

struct School{
    struct SchoolClass schoolClasses[20];
    struct SchoolRoom schoolRooms[10];
};

int main(void) {
    struct School school;
    printf("Success! \n");
}