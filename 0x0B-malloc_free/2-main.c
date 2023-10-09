#include <stdio.h>
#include "str_concat.h"

int main(void)
{
    char s1[] = "Hello, ";
    char s2[] = "world!";
    char *result;

    result = str_concat(s1, s2);
    if (result == NULL)
    {
        printf("Failed to concatenate strings\n");
        return (1);
    }

    printf("%s\n", result);

}
