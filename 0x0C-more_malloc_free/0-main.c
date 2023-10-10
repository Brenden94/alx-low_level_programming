#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *b;

    b = malloc_checked(1024);
    if (b == NULL)
    {
        printf("Memory allocation failed\\n");
        return (1);
    }
    free(b);
    return (0);
}
