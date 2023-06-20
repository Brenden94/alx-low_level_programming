#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alphabet[24]; // Array to store the alphabet without 'q' and 'e'
    int index = 0;
    char ch = 'a';

    while (ch <= 'z')
    {
        if (ch != 'e' && ch != 'q')
        {
            alphabet[index] = ch;
            index++;
        }
        ch++;
    }

    alphabet[index] = '\0'; // Null-terminate the string

    puts(alphabet); // Print the alphabet string

    return 0;
}
