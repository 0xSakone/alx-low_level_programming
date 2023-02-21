#include "main.h"

/**
 * print_last_digit - check if a given is result
 * The argument should be int
 *
 * @n: n value to check to check
 *
 * Return: print and return last digit
 */
int print_last_digit(int n)
{
	int last_n;
	if (last_n < 0)
	{
		last_n = (last_n) * -1;
	}
	last_n = n % 10;
	_putchar(last_n + '0');
	return (last_n);

}