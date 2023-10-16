#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    int sum;

    sum = sum_them_all(2, 278634, 87365);
    printf("%d\n", sum);

    return (0);
}
