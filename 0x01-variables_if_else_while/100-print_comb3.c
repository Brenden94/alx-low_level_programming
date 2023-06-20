#include "unistd.h"

/**
 * putchar_errcheck - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int putchar_errcheck(int c)
{
if (write(1, &c, 1) == -1)
return (-1);
return (1);
}

/**
 * print_combinations - Prints combinations of numbers
 */
void print_combinations(void)
{
putchar_errcheck(0); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(1); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(2); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(3); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(4); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(5); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(6); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(7); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(8); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(0); putchar_errcheck(9); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(2); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(3); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(4); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(5); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(6); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(7); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(8); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(1); putchar_errcheck(9); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(2); putchar_errcheck(3); putchar_errcheck(,); putchar_errcheck( );
putchar_errcheck(2); putchar_errcheck(4); putchar_errcheck(,); putchar_errcheck( );
/* Add more combinations here */
putchar_errcheck(n);
}

