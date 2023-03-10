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
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, u, si;
	char *s, *ss = "Error";

	for (i = 1; i < argc; i++)
	{
		u = 0;
		s = argv[i];
		while (s[u] != '\0')
		{
			if ((s[u] >= '0' && s[u] <= '9') || (s[u] == '-' || s[u] == '+'))
			{
				if (s[u] == '-')
					break;
				else if (s[u] == '+')
				{
					sum += atoi((s + u));
					break;
				}
				else if (atoi((s + u)) >= 0)
				{
					sum += atoi((s + u));
					break;
				}
			}
			else
			{
				si = 0;
				while (ss[si] != '\0')
					_putchar(ss[si++]);
				_putchar('\n');
				return (0);
			}
			u++;
		}
	}
	display_number(sum);
	_putchar('\n');
	return (0);
}
