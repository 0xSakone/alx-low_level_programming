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
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, u, si = 0;
	char *s, c, *ss = "Error";

	for (i = 1; i < argc; i++)
	{
		u = 0;
		s = argv[i];
		while (s[u] != '\0')
		{
			c = s[u];
			if (!(c >= '0' && c <= '9'))
			{
				while (ss[si] != '\0')
					_putchar(ss[si++]);
				_putchar('\n');
				return (1);
			}
			u++;
		}
		sum += atoi(argv[i]);
	}
	print_number(sum);
	return (_putchar('\n'));
}
