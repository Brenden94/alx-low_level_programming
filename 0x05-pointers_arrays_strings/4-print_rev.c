#include "main.h"

/**
 * _print_rev - Prints a string in reverse to stdout.
 * @str: The input string to be printed in reverse.
 *
 * Description: This function prints each character of the input string in
 * reverse order to standard output (stdout).
 */
void _print_rev(char *str)
{
if (str != NULL)
{
int length = 0;
int i;

/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}

/* Print the string in reverse order */
for (i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
}
}

