#include "main.h"

/**
 * print_number - print number
 * another details
 * @v: integer
 * Return: nothing
 */
void print_number(int v)
{
	unsigned int n;

	n = v;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		n %= 10;
	}
	_putchar(n + '0');
}
