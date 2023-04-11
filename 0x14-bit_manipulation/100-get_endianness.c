#include "main.h"

/**
 * get_endianness - little india
 * Return: 0 || 1
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *)&x;

	return ((int)*c);
}
