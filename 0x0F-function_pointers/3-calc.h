#ifndef CALC_H
#define CALC_H

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int mod(int a, int b);

#endif
