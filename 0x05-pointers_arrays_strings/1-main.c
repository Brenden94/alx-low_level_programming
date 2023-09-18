#include "main.h"

int main(void)
{
    int a = 98;
    int b = 42;

    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    a = 1024;
    b = -4096;

    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    a = INT_MAX;
    b = INT_MIN;

    printf("a = %d; b = %d;\n", a, b);
    swap_int(&a, &b);
    printf("a = %d; b = %d;\n", a, b);

    return (0);
}

