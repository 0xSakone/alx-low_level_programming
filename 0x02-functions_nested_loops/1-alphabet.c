#include "main.h"

/**
 * print_alphabet - Display alphabet character
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 124; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
