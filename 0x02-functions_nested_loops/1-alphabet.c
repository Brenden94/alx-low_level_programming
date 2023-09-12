#include <unistd.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline.
 */
void print_alphabet(void)
{
char c = 'a';

while (c <= 'z')
{
write(1, &c, 1); /* Print the current character */
c++;
}

write(1, "\n", 1); /* Print a newline character at the end */
}
