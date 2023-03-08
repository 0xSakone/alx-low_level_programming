#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * factorial - check the code
 * @n: integer
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}

