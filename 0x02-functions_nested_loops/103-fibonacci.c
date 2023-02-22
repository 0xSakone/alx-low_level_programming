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
 * main - entry function
 * No argument
 *
 * Return: 0 as success
 */
int main(void)
{
	int a, n, prev;
	int count;

	n = 1;
	prev = 1;
	for (count = 0; count < 50; count++)
	{
		a = n;
		n += prev;
		prev = a;
		if (n > 4000000)
		{
			break;
		}
	}
	display_number(n);
	_putchar('\n');
	return (0);
}
