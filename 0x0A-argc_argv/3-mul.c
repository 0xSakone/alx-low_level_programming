#include "main.h"
#include <stdlib.h>
#include <string.h>

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
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;
	char *s = "Error";

	if (argc >= 3)
		display_number(atoi(argv[1]) * atoi(argv[2]));
	else
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}
