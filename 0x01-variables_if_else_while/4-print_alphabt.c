#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase,
 * excluding the letters e and q.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            putchar(ch);
        }
        ch++;
    }

    putchar('\n');
    return 0;
}
