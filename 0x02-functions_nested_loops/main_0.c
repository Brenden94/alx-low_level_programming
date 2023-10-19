#include <limits.h>
#include "main.h"

/* Function declaration for print_sign */
int print_sign(int n);

int main(void)
{
    int r;

    r = print_sign(98);
    if (r < 0)
        r *= -1;
    _putchar(r + '0');
    return (0);
}

/* Simple definition for the print_sign function */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(+);
        return (1);
    }
    else if (n < 0)
    {
        _putchar(-);
        return (-1);
    }
    else
    {
        _putchar(0);
        return (0);
    }
}
