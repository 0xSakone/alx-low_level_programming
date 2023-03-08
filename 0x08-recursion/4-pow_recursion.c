#include "main.h"
#include <math.h>

/**
 * _pow_recursion - check the code
 * @x: integer
 * @y: integer
 *
 * Return: factorial
 */
int _pow_recursion(int x, int y)
{
	int i;

	i = pow(x, y);
	if (i <= 0)
	{
		return (-1);
	}
	return i;
}
