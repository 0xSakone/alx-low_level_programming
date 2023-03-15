#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - entry function
 * @grid: grid array
 * @height: integer
 * Return: noting
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
