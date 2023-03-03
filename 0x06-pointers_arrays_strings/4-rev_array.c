#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - Reverse array
 * @a: array
 * @n: array length
 * Return: result nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
