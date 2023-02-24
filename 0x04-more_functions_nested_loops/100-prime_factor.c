#include <stdio.h>

/**
 * display_number - print number
 *
 * @n: integer
 *
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
 * main - main entry function
 *
 * Return: return always 0
 */
int main(void)
{
	long int number;
	int i, j, old;

	old = 1;
	number = 612852475143;
	j = 1;
	while (number > 0)
	{
		while (number % j != 0)
			j++;
		number = number / j;
		if (j > old)
			old = j;
		j++;
		if (number == 1)
			break;
	}
	display_number(old);
	return (0);
}
