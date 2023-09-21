#include "main.h"

/*
 * _strncat - Concatenates two strings with a limit on the number of bytes.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i = 0;

    /* Find the length of dest */
    while (dest[dest_len] != 0)
    {
        dest_len++;
    }

    /* Concatenate up to n bytes from src */
    while (src[i] != 0 && i < n)
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    /* Null-terminate the resulting string */
    dest[dest_len + i] = 0;

    return (dest);
}
