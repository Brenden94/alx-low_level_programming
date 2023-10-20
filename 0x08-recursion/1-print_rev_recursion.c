#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to print
 */
void _print_rev_recursion(char *s)
{
    if (*s)
    {
        _print_rev_recursion(s + 1);
        _putchar(*s);
    }
}
