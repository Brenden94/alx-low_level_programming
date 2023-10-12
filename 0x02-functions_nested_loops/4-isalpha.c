#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1); /* c is a lowercase or uppercase letter */
    }
    else
    {
        return (0); /* c is not a letter */
    }
}
