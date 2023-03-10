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
	long int a, n, prev, total;

	n = 1;
	prev = 0;
	total = 0;
	while (prev < 4000000)
	{
		if ((n % 2) == 0)
		{
			total += n;
		}
		a = n;
		n += prev;
		prev = a;
	}
	display_number(total);
	_putchar('\n');
	return (0);
}
