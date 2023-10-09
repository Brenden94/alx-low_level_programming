#include <stdlib.h>
#include "str_concat.h"

char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1 = 0, len2 = 0, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of s1 and s2 */
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    /* Allocate memory for the concatenated string */
    concatenated = malloc((len1 + len2 + 1) * sizeof(char));

    if (concatenated == NULL)
        return (NULL);

    /* Copy s1 and s2 into the concatenated string */
    for (i = 0; i < len1; i++)
        concatenated[i] = s1[i];
    for (j = 0; j < len2; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return (concatenated);
}
