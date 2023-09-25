#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
    int sign = 1; // Initialize sign as positive
    int result = 0;
    int i = 0;

    // Handle leading whitespace
    while (s[i] ==  )
        i++;

    // Check for a sign
    if (s[i] == -)
    {
        sign = -1;
        i++;
    }
    else if (s[i] == +)
    {
        i++;
    }

    // Convert digits to integer
    while (s[i] >= 0 && s[i] <= 9)
    {
        result = result * 10 + (s[i] - 0);
        i++;
    }

    return sign * result;
}
