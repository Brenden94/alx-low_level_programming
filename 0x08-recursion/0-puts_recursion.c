#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string char.
 * Return: printed string
 */
void _puts_recursion(char *s)
{
    if (*s != 0)
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        putchar(n);  // Use putchar to print newline
    }
}
