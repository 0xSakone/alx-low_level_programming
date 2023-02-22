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
	long int c, a, n, prev;

	n = 1;
	prev = 0;
	for (c = 0; c < 98; c++)
	{
		a = n;
		n += prev;
		prev = a;
		display_number(n);
		if (c != 97)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
