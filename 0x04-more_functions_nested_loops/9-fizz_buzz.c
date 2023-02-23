#include "main.h"

/**
 * main - main entry function
 *
 * Return: return always 0
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			for (j = 0; j < 4; j++)
				_putchar("Fizz"[j]);
		if (i % 5 == 0)
			for (j = 0; j < 4; j++)
				_putchar("Buzz"[j]);
		else if (i % 3 != 0)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
				_putchar('0' + i);
		}
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
