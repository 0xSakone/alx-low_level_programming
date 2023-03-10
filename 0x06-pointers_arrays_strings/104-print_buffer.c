#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_buffer - addition infinite number
 * @b: character n1 need to be add to second
 * @size: integer size of a given array
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, u = 0, u2 = 0, k = 0, s;

	s = size % 10 > 0 ? 1 : 0;
	for (i = 0; i < size / 10 + s; i++)
	{
		printf("%.6x: ", i * 10);
		k = 0;
		while (u < (i + 1) * 10)
		{
			if (k == 2)
			{
				printf(" ");
				k = 0;
				if (u == (i + 1) * 10)
					break;
			}
			if (u <= size - 1)
				printf("%.2x", b[u]);
			else
				printf("  ");
			u++;
			k++;
		}
		printf(" ");
		while (u2 < (i + 1) * 10)
		{
			if (u2 == (i + 1) * 10)
				break;
			if (u2 <= size - 1)
			{
				if (b[u2] < 32 || b[u2] > 126)
					printf(".");
				else
					printf("%c", b[u2]);
			}
			u2++;
		}
		printf("\n");
	}
}
