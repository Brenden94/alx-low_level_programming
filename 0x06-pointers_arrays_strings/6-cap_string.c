#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i, j;
    int capitalize_next = 1; /* Flag to check if the next word should be capitalized */

    for (i = 0; str[i] != 0; i++)
    {
        if (capitalize_next && (str[i] >= a && str[i] <= z))
        {
            str[i] -= 32; /* Convert to uppercase */
            capitalize_next = 0;
        }

        for (j = 0; separators[j] != 0; j++)
        {
            if (str[i] == separators[j])
            {
                capitalize_next = 1;
                break;
            }
        }
    }

    return str;
}
