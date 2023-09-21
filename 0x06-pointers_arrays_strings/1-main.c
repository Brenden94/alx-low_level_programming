#include "main.h"
#include <stdio.h>

int main(void)
{
    char dest[100] = "Hello, ";
    char src[] = "world!";
    int n = 5;

    printf("Before _strncat: %s\\n", dest);
    _strncat(dest, src, n);
    printf("After _strncat: %s\\n", dest);

    return (0);
}
