#include "main.h"

/**
 * binary_to_uint - converter
 * @b: bin char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len, i, decimal = 1;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	i = (len - 1);
	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			total += decimal;
		decimal *= 2;
	}

	return (total);
}
