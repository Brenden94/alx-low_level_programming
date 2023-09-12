#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'A'; // Example character

    if (isalpha(ch))
    {
        printf("%c is alphabetic.\\n", ch);
    }
    else
    {
        printf("%c is not alphabetic.\\n", ch);
    }

    return (0);
}
