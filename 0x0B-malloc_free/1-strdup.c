#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL.
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
    char *duplicate;
    int length = 0, i;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the input string */
    while (str[length])
        length++;

    /* Allocate memory for the duplicate string */
    duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return (NULL);

    /* Copy the characters from str to duplicate */
    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return (duplicate);
}
