#include "main.h"

/**
 * display_number - print number
 *
 * @n: integer
 *
 * Return: nothing
 */
void display_number(int n)
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
 * print_times_table - print time tables
 * No argument
 *
 * @x: integer
 *
 * Return: print times table
 */
void print_times_table(int x)
{
	int a, b, n;

	for (a = 0; a <= x; a++)
	{
		for (b = 0; b <= x; b++)
		{
			n = a * b;
			if (n >= 10)
			{
				_putchar(' ');
				display_number(n);
				if (b != x)
				{
					_putchar(',');
				}
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + n);
				if (b != x)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
