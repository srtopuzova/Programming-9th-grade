#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

struct Transformation {
    long result;
    char error[100];
};

struct Transformation func(char str[]);

#endif