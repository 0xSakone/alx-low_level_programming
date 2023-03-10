#include "main.h"
#include <math.h>
#include <stdio.h>

int _sqrt_recursion_helper(int n, int i);
/**
 * _sqrt_recursion - function
 * @n: integer
 *
 * Return: racine
 */
int _sqrt_recursion(int n)
{
	if (n <= -1)
		return (-1);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - function
 * @n: integer
 * @i: integer iteration
 *
 * Return: racine
 */
int _sqrt_recursion_helper(int n, int i)
{
	double diff;

	diff = i * i - n;
	if (diff <= -1 && i == (i + n / i) / 2)
		return (-1);
	if (diff >= -0.0001 && diff <= 0.0001)
	{
		return (i);
	}
	else
		return (_sqrt_recursion_helper(n, (i + n / i) / 2));
}
