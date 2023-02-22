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
 * jack_bauer - print jackbaur
 * No argument
 *
 * Return: print 24 chrono
 */
void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			if (h >= 10)
			{
				_putchar('0' + getFirstDigit(h));
				_putchar('0' + h % 10);
			}
			else
			{
				_putchar('0');
				_putchar('0' + h);
			}
			_putchar(':');
			if (min >= 10)
			{
				_putchar('0' + getFirstDigit(min));
				_putchar('0' + min % 10);
			}
			else
			{
				_putchar('0');
				_putchar('0' + min);
			}
			_putchar('\n');
		}
	}
}
