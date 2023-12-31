#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints integers separated by a separator
 * @separator: the string to be printed between numbers
 * @n: the number of integers
 * @...: the integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));
        if (i < n - 1 && separator)
            printf("%s", separator);
    }
    va_end(args);
    printf("\n");
}
