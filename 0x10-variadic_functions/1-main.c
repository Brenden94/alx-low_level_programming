#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int main()
{
    print_numbers(", ", 5, 1, 2, 3, 4, 5);
    print_numbers(NULL, 3, 100, 200, 300);
    print_numbers(" - ", 0);

    return (0);
}
