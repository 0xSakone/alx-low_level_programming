#include "main.h"

/**
 * display_number - print number
 *
 * @n: integer
 *
 * Return: nothing
 */
void display_number(long int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		display_number(n / 10);
		n %= 10;
	}
	_putchar(n + '0');
}

/**
 * getFirstDigit - check if a given is result
 * The argument should be int
 *
 * @n: n value to check to check
 *
 * Return: print and return first digit
 */
int getFirstDigit(int n)
{
	int first;

	first = n;
	for (first = n; first >= 10;)
	{
		first = first / 10;
	}
	return (first);
}

/**
 * main - entry function
 * No argument
 *
 * Return: 0 as success
 */
int main(void)
{
	long int c, a, n, prev;

	n = 1;
	prev = 0;
	for (c = 0; c < 98; c++)
	{
		a = n;
		n += prev;
		prev = a;
		if (getFirstDigit(n) == 1 || getFirstDigit(n) == 2)
		{
			display_number(n);
		}
	}
	_putchar('\n');
	return (0);
}
