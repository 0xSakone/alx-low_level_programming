#include "main.h"

/**
 * _strlen - count str len
 * @s: strings
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

/**
 * create_file - function to create file with content
 * @filename: the name of file to create
 * @text_content: the content of file should be create
 * Return: result
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int content_count;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	content_count = _strlen(text_content);
	if (content_count == 0 || text_content == NULL)
		write(file, "", 0);
	else
	{
		if (write(file, text_content, content_count) == -1)
			return (-1);
	}
	close(file);
	return (1);
}
