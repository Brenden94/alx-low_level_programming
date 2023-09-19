#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
char temp;
int i = 0;
int j = 0;

if (s == NULL)
return;

while (s[i])
i++;

i--;

while (i > j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i--;
j++;
}
}
