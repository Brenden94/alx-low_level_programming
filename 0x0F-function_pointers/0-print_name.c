#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}