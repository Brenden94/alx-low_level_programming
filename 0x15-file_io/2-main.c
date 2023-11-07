#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <filename> <text_content>\n", argv[0]);
        return (1);
    }

    int result = append_text_to_file(argv[1], argv[2]);
    if (result == -1)
    {
        fprintf(stderr, "Error: Can't append to file %s\n", argv[1]);
        return (1);
    }

    return (0);
}
