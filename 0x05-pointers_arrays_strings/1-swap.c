#include <stdio.h>

/**
 * swap_int - Function that swap to variable value
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
