#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int main()
{
    int sum;

    sum = sum_them_all(0);
    printf("Sum: %d\n", sum);

    sum = sum_them_all(5, 98, 402, -1024, 48, 50);
    printf("Sum: %d\n", sum);

    return (0);
}
