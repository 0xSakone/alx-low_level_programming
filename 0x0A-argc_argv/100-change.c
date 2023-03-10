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
	int sum = 0, n = 0, i;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (showError());

	n = atoi(argv[1]);
	if (n < 0)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	while (n != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (n >= arr[i])
			{
				n -= arr[i];
				sum++;
				break;
			}
		}
	}
	display_number(sum);
	return (_putchar('\n'));
}
