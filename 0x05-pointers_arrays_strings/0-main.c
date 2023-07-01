#include <stdio.h>

int main(void)
{
	int n;

	n = 402;
	printf("n=%d
", n);

	reset_to_98(&n);
	printf("n=%d
", n);

	return 0;
}
