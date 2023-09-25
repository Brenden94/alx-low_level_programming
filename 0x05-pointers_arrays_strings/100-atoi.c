#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1; /* Initialize sign as positive */
    int result = 0;

    while (s[i] ==   || (s[i] >= 9 && s[i] <= 13))
        i++;

    if (s[i] == -)
    {
        sign = -1;
        i++;
    }
    else if (s[i] == +)
    {
        i++;
    }

    while (s[i] >= 0 && s[i] <= 9)
    {
        result = result * 10 + (s[i] - 0);
        i++;
    }

    return (result * sign);
}
