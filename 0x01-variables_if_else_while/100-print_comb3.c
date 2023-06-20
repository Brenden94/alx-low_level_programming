#include <unistd.h>

#define COMMA_SPACE putchar_errcheck(44); putchar_errcheck(32)

/**
 * putchar_errcheck - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int putchar_errcheck(int c)
{
    return (write(1, &c, 1) == -1 ? -1 : 1);
}

/**
 * print_combinations - Prints all possible combinations of three digits
 *
 * Description: This function prints all possible different combinations of
 * three digits. The digits are separated by a comma and a space. Numbers
 * should be printed in ascending order. Only five calls to putchar_errcheck
 * are allowed. The program returns a SUCCESS value.
 */
void print_combinations(void)
{
    int i, j, k;

    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                putchar_errcheck(i + 0);
                putchar_errcheck(j + 0);
                putchar_errcheck(k + 0);

                if (i != 7 || j != 8 || k != 9)
                    COMMA_SPACE;
            }
        }
    }

    putchar_errcheck(n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (SUCCESS)
 */
int main(void)
{
    print_combinations();

    return (0);
}
