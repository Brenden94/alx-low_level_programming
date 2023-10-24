#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element for which the cmp function does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return i;
		}
	}
	return -1;
}
