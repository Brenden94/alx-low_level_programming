#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n", 27);

    return (0);
}
