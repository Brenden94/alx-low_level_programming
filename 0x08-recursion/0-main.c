#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _sqrt_recusion - A function that does something with recursion
 * @s: Some parameter
 */
void _sqrt_recusion(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _sqrt_recusion(s + 1);
    }
}

/**
 * _puts_main - New main function
 *
 * Return: Always 0.
 */
int _puts_main(void)
{
    _sqrt_recusion("This is a test.");
    return (0);
}
