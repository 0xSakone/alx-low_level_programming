#include "main.h"

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
 * showTwoDigit - check if a given is result
 * The argument should be int
 *
 * @n: n value to check to check
 *
 * Return: print two digit
 */
void showTwoDigit(int n)
{
	if (n >= 10)
	{
		_putchar('0' + getFirstDigit(n));
		_putchar('0' + n % 10);
	}
}

/**
 * times_table - print time tables
 * No argument
 *
 * Return: print times table
 */
void times_table(void)
{
	int a, b, n;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			n = a * b;
			if (n >= 10)
			{
				_putchar(' ');
				showTwoDigit(n);
				if (b != 9)
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
				}
				_putchar('0' + n);
				if (b != 9)
				{
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}
