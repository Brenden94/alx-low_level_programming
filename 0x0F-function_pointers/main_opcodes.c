#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s number_of_bytes\n", argv[0]);
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0) {
        fprintf(stderr, "Error: Number of bytes cannot be negative\n");
        return 2;
    }

    unsigned char *main_address = (unsigned char *)&main;

    for (int i = 0; i < num_bytes; i++) {
        printf("%02x ", main_address[i]);
    }
    printf("\n");

    return 0;
}
