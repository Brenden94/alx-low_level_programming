#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}
