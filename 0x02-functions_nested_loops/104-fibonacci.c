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

	i = 1;
	j = 2;
	display_number(i);
	_putchar(',');
	_putchar(' ');
	display_number(j);
	_putchar(',');

	for (k = 0; k < 96; k++)
	{
		l = i + j;
		i = j;
		j = l;
		_putchar(' ');
		display_number(l);
		if (k != 95)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
	return (0);
}
