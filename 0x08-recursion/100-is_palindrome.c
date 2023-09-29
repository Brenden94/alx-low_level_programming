#include "main.h"

int is_palindrome(char *s)
{
    int length = 0;
    int i = 0;
    int j = 0;

    while (s[length] != 0)
    {
        length++;
    }

    j = length - 1;

    while (i < j)
    {
        if (s[i] != s[j])
            return (0);
        i++;
        j--;
    }

    return (1);
}
