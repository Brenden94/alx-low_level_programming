#include <stdio.h>

int main(void)
{
	int i;

	printf("Infinite loop incoming :(
");

	i = 0;

	/* Commented out the infinite loop */
	/*
	while (i < 10)
	{
		putchar(i);
	}
	*/

	printf("Infinite loop avoided! \o/
");

	return (0);
}
