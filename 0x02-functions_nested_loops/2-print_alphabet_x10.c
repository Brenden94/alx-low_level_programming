#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet 10 times.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'A'; c <= 'Z'; c++)
		{
			printf("%c ", c);
		}
		printf("\n");
	}

	return (0);
}
