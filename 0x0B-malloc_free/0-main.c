#include <stdio.h>
#include "holberton.h"

int main(void)
{
    char *str;

    str = create_array(5, 'H');
    if (str == NULL)
    {
        printf("Failed to allocate memory\\n");
        return (1);
    }
    printf("%s\\n", str);
    return (0);
}
