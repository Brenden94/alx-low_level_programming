#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - Updates the value pointed to by "n" to 98.
 * @n: A pointer to an integer.
 *
 * Description: This function takes a pointer to an integer and updates the
 * value it points to, setting it to 98.
 */
void reset_to_98(int *n)
{
if (n != NULL)
{
*n = 98;
}
}

