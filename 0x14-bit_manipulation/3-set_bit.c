#include "main.h"

/**
 * set_bit - change bit
 * @n: n address
 * @index: position integewr
 * Return: 1 || -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
