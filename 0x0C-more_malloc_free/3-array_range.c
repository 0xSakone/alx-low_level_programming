#include "main.h"
#include <stdlib.h>
/**
 * array_range - entry function
 * @min: integer
 * @max: integer
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}

	return (ar);
}