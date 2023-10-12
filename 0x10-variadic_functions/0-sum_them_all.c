#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    int sum = 0;

    if (n == 0)
    {
        va_end(args);
        return 0;
    }

    for (unsigned int i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}
