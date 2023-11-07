#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t read_bytes;
    char *buffer;
    FILE *file;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    buffer = malloc(letters);
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    read_bytes = fread(buffer, 1, letters, file);
    if (read_bytes == -1)
    {
        free(buffer);
        fclose(file);
        return (0);
    }

    write(STDOUT_FILENO, buffer, read_bytes);

    free(buffer);
    fclose(file);
    return (read_bytes);
}
