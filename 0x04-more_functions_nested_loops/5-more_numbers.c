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
 * more_numbers - display number from 0 to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i < 15; j++)
		{
			display_number(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

