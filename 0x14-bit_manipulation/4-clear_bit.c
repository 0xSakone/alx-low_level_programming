#include "main.h"

/**
 * clear_bit - change bit to zero
 * @n: number
 * @index: index
 * Return: 1 || -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	if (*n & i)
		*n = *n ^ i;
	return (1);
}
