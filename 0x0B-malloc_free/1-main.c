#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
    char *str;
    char *dup;

    str = "Hello, Holberton!";
    dup = _strdup(str);

    if (dup == NULL)
    {
        printf("Failed to allocate memory\n");
        return (1);
    }

    printf("Original string: %s\n", str);
    printf("Duplicate string: %s\n", dup);

    free(dup);

    return (0);
}
