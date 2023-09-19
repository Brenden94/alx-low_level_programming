#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *str1 = "Holberton!";
    char *str2 = "Lorem ipsum...";
    char *str3 = "";

    _puts("str = \"Holberton!\";"); /* regular string */
    _print_rev(str1);

    _puts("str = \"Lorem ipsum...\";"); /* long string */
    _print_rev(str2);

    _puts("str = \"\";"); /* empty string */
    _print_rev(str3);

    return (0);
}

