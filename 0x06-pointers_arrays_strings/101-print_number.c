#include <stdio.h>
#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if ((n % 10) != n)
		print_number(n / 10);
		_putchar(n % 10 + '0');
}
