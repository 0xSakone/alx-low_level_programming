#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocateds memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (b == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		b[i] = 0;
	}

	return (b);
}
