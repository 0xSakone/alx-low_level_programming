#include "main.h"

/* Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.

The numbers should be separated by comma, followed by a space ,
You are allowed to use the standard library
You are not allowed to use any other library (You can’t use GMP etc…)
You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for 1 and 2)

*/

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
	long int i, j, k, l;
	long int partie_1, partie_2, k1, k2;

	i = 1;
	j = 2;
	display_number(i);
	_putchar(',');
	_putchar(' ');
	display_number(j);
	_putchar(',');

	for (k = 0; k < 91; k++)
	{
		l = i + j;
		i = j;
		j = l;
		_putchar(' ');
		display_number(l);
		_putchar(',');
	}

	partie_1 = i / 1000000000;
	partie_2 = i % 1000000000;
	k1 = j / 1000000000;
	k2 = j % 1000000000;

	for (k = 92; k < 99; ++k)
	{
		_putchar(',');
		display_number(k1 + (k2 / 1000000000));
		display_number(k2 % 1000000000);
		k1 = k1 + partie_1;
		partie_1 = k1 - partie_1;
		k2 = k2 + partie_2;
		partie_2 = k2 - partie_2;
		if (k != 95)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
	return (0);
}
