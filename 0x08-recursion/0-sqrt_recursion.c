#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root of a number using recursion
 * @n: The number to calculate the square root of
 *
 * Return: The square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    return helper(n, 1);
}

/**
 * helper - Helper function to find the square root recursively
 * @n: The number to find the square root of
 * @x: The current number to check
 *
 * Return: The square root if found, -1 otherwise
 */
int helper(int n, int x)
{
    if (x * x == n)
        return x;
    if (x * x > n)
        return -1;
    return helper(n, x + 1);
}
