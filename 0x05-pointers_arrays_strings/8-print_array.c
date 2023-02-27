#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - print given array
 * @a: given array
 * @n: array len
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else if (i > 0)
			printf("%i\n",a[i]);
	}
}
