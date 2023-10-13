#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    char *separator = "";
    unsigned int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
                break;
                break;
                break;
                printf("%s%s", separator, va_arg(args, char *));
                break;
        }
        i++;
    }

    va_end(args);
    printf("\\n");
}
