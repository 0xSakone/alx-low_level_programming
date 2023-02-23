#include "main.h"

/**
 * print_diagonal - display line n diagonal n times
 *
 * @n: integer n
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
