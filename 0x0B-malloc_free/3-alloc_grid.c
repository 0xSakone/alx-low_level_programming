#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - entry function
 * @width: integer
 * @height: integer
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **b;
	int i, u;
	int *c;

	if (width <= 0 || height <= 0)
		return (NULL);
	b = malloc(height * sizeof(int *));

	if (b != NULL)
	{
		i = 0;
		while (i < height)
		{
			u = 0;
			c = malloc(width * sizeof(int));
			if (c == NULL)
			{
				free(c);
				return (NULL);
			}
			while (u < height)
			{
				c[u] = 0;
				u++;
			}
			b[i] = c;
			i++;
		}
	}
	else
	{
		free(b);
		return (NULL);
	}
	return (b);
}
