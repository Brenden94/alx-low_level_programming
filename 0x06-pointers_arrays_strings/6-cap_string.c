#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int i = 0;

    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] = str[i] - 32; /* Convert first letter to uppercase */
    }
    i++;

    while (str[i] != '\0')
    {
        char separators[] = " \t\n,;.!?\"(){}";
        int is_separator = 0;

        for (int j = 0; separators[j]; j++)
        {
            if (str[i] == separators[j])
            {
                is_separator = 1;
                break;
            }
        }

        if (is_separator && str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] = str[i + 1] - 32; /* Convert next letter to uppercase */
        }

        i++;
    }

    return str;
}
