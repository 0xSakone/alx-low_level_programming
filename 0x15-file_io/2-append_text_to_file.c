#include "main.h"

/**
 * __strlen - count str len
 * @s: strings
 * Return: count
 */
int __strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

/**
 * append_text_to_file - function to create file with content
 * @filename: the name of file to create
 * @text_content: the content of file should be create
 * Return: result
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int content_count = 0, ecrit, file;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		content_count = __strlen(text_content);
		ecrit = write(file, text_content, content_count);

		if (ecrit == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);

	return (1);
}
