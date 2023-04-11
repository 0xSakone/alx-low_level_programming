#include "main.h"

/**
 * flip_bits - flipper
 * @n: int
 * @m: int
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int value;


	for (i = 63; i >= 0; i--)
	{
		value = (n ^ m) >> i;
		if (value & 1)
			count++;
	}

	return (count);
}
