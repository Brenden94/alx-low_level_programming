#include <stdio.h>
#include "function_pointers.h"

void print_upper(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            putchar(*str - 'a' + 'A');
        else
            putchar(*str);
        str++;
    }
}

void print_lower(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
            putchar(*str - 'A' + 'a');
        else
            putchar(*str);
        str++;
    }
}

int main()
{

    printf("Original: %s\n", name);
    print_name(name, print_upper);
    print_name(name, print_lower);

    return (0);
}
