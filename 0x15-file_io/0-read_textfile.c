#include "main.h"

/**
 * read_textfile - read texfile is function to read content
 * @filename: filename
 * @letters: number of caracter
 * Return: number of printed caracters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t ecrit, reader;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	reader = read(file, buffer, letters);
	ecrit = write(STDOUT_FILENO, buffer, reader);
	close(file);
	free(buffer);

	return (ecrit);
}
