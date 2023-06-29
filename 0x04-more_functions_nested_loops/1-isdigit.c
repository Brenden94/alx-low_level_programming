#include "main.h"

/**
 * _isdigit - Check for a digit (0-9)
 * @c: Integer holding the character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return 1;

    return 0;
}
