#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry function
 * @size: int
 * @c: char
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	int i;

	b = malloc(size);
	for (i = 0; i < (int)size; i++)
	{
		b[i] = c;
	}
	return (b);
}
