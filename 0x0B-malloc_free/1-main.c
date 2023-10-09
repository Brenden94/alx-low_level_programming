#include <stdio.h>
#include <stdlib.h>

char **strtow(char *str);

int main(void) {
    char **av;
    int i;

    av = strtow("      Holberton School         #cisfun      ");
    for (i = 0; av[i]; i++) {
        printf("%s\n", av[i]);
        free(av[i]);
    }
    free(av);
    return (0);
}
