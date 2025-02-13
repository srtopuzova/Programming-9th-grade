#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots (long double a, long double b, long double c) {
    struct QuadraticRootsResult result;
    result.norealroots = 0;
    long double D = (b * b) - (4 * a * c);
    if(D < 0) {
        printf("Error: D < 0 => no real roots. \n");
        result.norealroots = 1;
        return result;
    }
    long double root_D = sqrtl(D);
    result.x1 = (-b + root_D) / (2 * a);
    result.x2 = (-b - root_D) / (2 * a);
    return result;
}