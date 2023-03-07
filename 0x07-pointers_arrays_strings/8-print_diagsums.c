#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - get diagonal sum
 * @a: array
 * @size: int
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			s1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			s2 += *(a + i);
	}
	printf("%i, %i\n", s1, s2);
}
