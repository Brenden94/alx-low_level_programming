#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there's an invalid character in 'b' or 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;

    if (b == NULL)
        return 0;

    for (size_t i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0')
        {
            result <<= 1;  // Left shift to make room for the next bit
        }
        else if (b[i] == '1')
        {
            result = (result << 1) | 1;  // Set the rightmost bit to 1
        }
        else
        {
            return 0;  // Invalid character found
        }
    }

    return result;
}
