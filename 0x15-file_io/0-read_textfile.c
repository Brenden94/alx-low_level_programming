#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return 0;

	FILE *file = fopen(filename, "r");
	if (file == NULL)
		return 0;

	char *buffer = malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return 0;
	}

	ssize_t read_bytes = fread(buffer, 1, letters, file);
	ssize_t write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	free(buffer);
	fclose(file);

	if (read_bytes == write_bytes)
		return read_bytes;
	else
		return 0;
}
