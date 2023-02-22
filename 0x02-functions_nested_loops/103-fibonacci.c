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
 * main - entry function
 * No argument
 *
 * Return: 0 as success
 */
int main(void)
{
	long int a, n, prev;

	n = 1;
	prev = 1;
	while (prev < 4000000)
	{
		a = n;
		n += prev;
		prev = a;
		if ((a % 2) == 0)
		{
			prev += a;
		}
	}
	display_number(prev);
	_putchar(' ');
	display_number(n);
	_putchar('\n');
	return (0);
}
