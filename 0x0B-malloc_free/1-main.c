#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

int main(void) {
    char *dup;

    dup = _strdup("Holberton School #cisfun");
    if (dup != NULL) {
        printf("%s\n", dup);
        free(dup);
    }

    return (0);
}

