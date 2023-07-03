#include "main.h"


/**
 * reset_to_98 - updates the value *n points to.
 * @n: the number to modify.
 */
void reset_to_98(int *n)
{
	char digit;

	digit = '0' + 9;
	_putchar(digit);
	*n = 98;
}
