#include <stdio.h>

int main(int argc, char *argv[]) {
    // Suppress unused parameter warning
    (void)argc;

    printf("Number of arguments: %d\n", argc - 1);

    return 0;
}
