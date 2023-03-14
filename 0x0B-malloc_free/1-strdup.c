#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - entry function
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *b;
	int i;
	int size = strlen(str);

	b = malloc(size + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (size == 1)
	{
		b[0] = '\n';
	}
	else if (b != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			b[i] = str[i];
		}
	}
	return (b);
}
