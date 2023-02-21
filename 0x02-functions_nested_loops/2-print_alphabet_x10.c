#include "main.h"

/**
 * print_alphabet_x10 - Display alphabet character 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i, u;

	for (u = 0; u < 10; u++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
