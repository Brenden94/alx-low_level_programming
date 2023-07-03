#include "main.h"


/*
 * main - Entry point
 *
 * Description: Prints the value of n before and after calling reset_to_98
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 402;
	_putchar('n\);
	_putchar('=\);
	_putchar('4\);
	_putchar('0\);
	_putchar('2\);
	_putchar('
\);

	reset_to_98(&n);

	_putchar('n\);
	_putchar('=\);
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('
\);

	return (0);
}
