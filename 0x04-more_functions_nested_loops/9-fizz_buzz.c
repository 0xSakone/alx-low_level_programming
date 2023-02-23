#include "main.h"

/**
 * show - display character function
 * @s: char array
 * Return: nothing
 */
void show(char s[4])
{
	int i;

	for (i = 0; i < 4; i++)
		_putchar(s[i]);
}

/**
 * main - main entry function
 * Return: return always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			show("Fizz");
		if (i % 5 == 0)
			show("Buzz");
		else if (i % 3 != 0)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
				_putchar('0' + i);
		}
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

