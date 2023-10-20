#include "main.h"
/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1, on error -1, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _sqrt_decision - Description of your function
 * @s: The string to print
 */
void _sqrt_decision(char *s)
{
    if (*s)
    {
        _putchar(*s);
        _sqrt_decision(s + 1);
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    _sqrt_decision("First, solve the problem. Then, write the code");
    return (0);
}
