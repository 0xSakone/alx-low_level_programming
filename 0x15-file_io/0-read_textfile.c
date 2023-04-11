#include "main.h"

/*
 * read_textfile - read texfile
 * @filename: filename
 * @letters: number of caracter
 * Return: number of printed caracters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, count = 0;
	char buffer[1];
	ssize_t ecrit;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	while (read(file, buffer, 1) > 0 && count <= (int)letters)
	{
		ecrit = write(STDOUT_FILENO, buffer, 1);
        if (ecrit == -1) {
            close(file);
        }
        count++;
	}

	return (count);
}
