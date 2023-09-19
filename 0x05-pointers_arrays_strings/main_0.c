#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "Holberton!"; // Regular string
    printf("str = \"%s\"\n", str);

    str = "Lorem ipsum"; // Long string
    printf("str = \"%s\"\n", str);

    str = ""; // Empty string
    printf("str = \"%s\"\n", str);

    return (0);
}
