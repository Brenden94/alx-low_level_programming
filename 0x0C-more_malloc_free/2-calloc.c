#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - Allocates memory for an array and initializes to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *arr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    arr = malloc(nmemb * size);

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < nmemb * size; i++)
        arr[i] = 0;

    return ((void *)arr);
}
