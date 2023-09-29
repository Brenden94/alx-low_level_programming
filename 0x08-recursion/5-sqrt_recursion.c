#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int _sqrt_recursion(int n)
{
    return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Recursive function to calculate the square root.
 * @n: The number to calculate the square root for.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it does not have one.
 */
int calculate_sqrt(int n, int i)
{
    if (n < 0)
        return (-1);
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (calculate_sqrt(n, i + 1));
}
