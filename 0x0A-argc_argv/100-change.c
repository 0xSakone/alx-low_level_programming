#include "main.h"
#include <stdlib.h>

/**
 * display_number - print number
 * @n: integer
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
 * showError - display error
 * Return: 1
 */
int showError(void)
{
	int si = 0;
	char *ss = "Error";

	while (ss[si] != '\0')
		_putchar(ss[si++]);
	_putchar('\n');
	return (1);
}

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	int sum = 0, n = 0;

	if (argc != 2)
		return (showError());

	n = atoi(argv[1]);
	if (n < 0)
		return (showError());

	while (n != 0)
	{
		if (n >= 25)
		{
			n -= 25;
			sum++;
		}
		else if (n >= 10)
		{
			n -= 10;
			sum++;
		}
		else if (n >= 5)
		{
			n -= 5;
			sum++;
		}
		else if (n >= 2)
		{
			n -= 2;
			sum++;
		}
		else if (n >= 1)
		{
			n -= 1;
			sum++;
		}
	}
	display_number(sum);
	return (_putchar('\n'));
}
