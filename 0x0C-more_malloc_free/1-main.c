#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);

int main(void)
{
    char *concatenated = NULL;

    concatenated = string_nconcat("Hello", " World!", 5);
    if (concatenated == NULL)
    {
        printf("Concatenation failed\\n");
        return (1);
    }

    printf("%s\\n", concatenated);
    free(concatenated);
    return (0);
}
