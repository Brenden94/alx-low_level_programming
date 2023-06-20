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
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers. The numbers range from 0 to 99 and are separated by a space. All
 * numbers are printed with two digits. The combinations are separated by a
 * comma and a space. The program uses only eight calls to putchar_errcheck.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar_errcheck((num1 / 10) + 48);
putchar_errcheck((num1 % 10) + 48);
putchar_errcheck(32);
putchar_errcheck((num2 / 10) + 48);
putchar_errcheck((num2 % 10) + 48);

if (!(num1 == 98 && num2 == 99))
COMMA_SPACE;
}
}

putchar_errcheck(10);

return (0);
}
