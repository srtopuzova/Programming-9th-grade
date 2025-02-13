#include <stdio.h>
#include "quadraticroots.h"

int main(void) {
    int a1, b1, c1;
    printf("Enter 3 int arguments: \n");
    scanf("%d %d %d", &a1, &b1, &c1);
    struct QuadraticRootsResult result1 = findroots(a1, b1, c1);
    if(!result1.norealroots) {
        printf("x1 -> %Lf x2 -> %Lf \n", result1.x1, result1.x2);
    }
    float a2, b2, c2;
    printf("Enter 3 float arguments: \n");
    scanf("%f %f %f", &a2, &b2, &c2);
    struct QuadraticRootsResult result2 = findroots(a2, b2, c2);
    if(!result2.norealroots) {
        printf("x1 -> %Lf x2 -> %Lf \n", result2.x1, result2.x2);
    }
    double a3, b3, c3;
    printf("Enter 3 double arguments: \n");
    scanf("%lf %lf %lf", &a3, &b3, &c3);
    struct QuadraticRootsResult result3 = findroots(a3, b3, c3);
    if(!result3.norealroots) {
        printf("x1 -> %Lf x2 -> %Lf \n", result3.x1, result3.x2);
    }
}