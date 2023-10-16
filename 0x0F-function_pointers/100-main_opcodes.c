#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s number_of_bytes\n", argv[0]);
        return (1);
    }

    int num_bytes = atoi(argv[1]);
    if (num_bytes <= 0) {
        printf("Error\n");
        return (2);
    }

    for (int i = 0; i < num_bytes; i++) {
        printf("%02hhx", *((char *)main + i));
        if (i < num_bytes - 1)
            printf(" ");
        else
            printf("\n");
    }

    return (0);
}
