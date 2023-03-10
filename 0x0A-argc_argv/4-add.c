#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
 * showError - print number
 * Return: 1 as error
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
	int sum = 0, i, u, tun = 0;
	char *s, c;

	for (i = 1; i < argc; i++)
	{
		u = 0;
		s = argv[i];
		tun = 0;
		while (s[u] != '\0')
		{
			c = s[u];
			if ((c >= '0' && c <= '9') || (c == '-' || c == '+'))
			{
				if (c == '-')
					tun = 1;
			}
			else
				return (showError());
			u++;
		}
		if (tun == 0)
			sum += atoi(argv[i]);
	}
	display_number(sum);
	return (_putchar('\n'));
}