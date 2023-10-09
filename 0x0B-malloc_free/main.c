#include "main.h"
#include <stdio.h>

int main(void)
{
    char *array;
    unsigned int size = 10;

    if (array == NULL)
    {
        printf("Failed to create the array.\\n");
        return (1);
    }

    for (unsigned int i = 0; i < size; i++)
    {
        printf("%c", array[i]);
    }

    printf("\\n");

    free(array);

    return (0);
}
