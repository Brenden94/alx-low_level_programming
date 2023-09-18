#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The input string to be printed.
 *
 * Description: This function prints each character of the input string to
 * standard output (stdout) using the `_putchar` function.
 */
void _puts(char *str)
{
if (str != NULL)
{
int i = 0;

while (str[i] != 0)
{
_putchar(str[i]);
i++;
}
}
}

