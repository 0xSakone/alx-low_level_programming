#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 126; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
