#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
main.h unsigned int i;

main.h for (i = 0; i < n; i++)
main.h {
main.h main.h s[i] = b;
main.h }

main.h return (s);
}
