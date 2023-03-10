#include "main.h"

/**
 * _atoi - Function converts a string to an integer
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

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
	int sum = 0, i, u;
	char *s, c;

	for (i = 1; i < argc; i++)
	{
		u = 0;
		s = argv[i];
		while (s[u] != '\0')
		{
			c = s[u];
			if (!(c >= '0' && c <= '9'))
			{
				return (showError());
			}
			u++;
		}
		sum += _atoi(argv[i]);
	}
	display_number(sum);
	return (_putchar('\n'));
}
