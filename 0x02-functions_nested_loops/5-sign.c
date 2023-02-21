#include "main.h"

/**
 * print_sign - check if a given is positive or negative and give result
 * The argument should be char
 *
 * @n: n value to check to check
 *
 * Return: 1 if its positve and 0 else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
