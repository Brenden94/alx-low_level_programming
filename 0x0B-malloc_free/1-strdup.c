#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str)
{
    char *duplicate;
    size_t length, i;

    if (str == NULL)
        return NULL;

    length = strlen(str);

    duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return NULL;

    for (i = 0; i <= length; i++)
        duplicate[i] = str[i];

    return duplicate;
}

