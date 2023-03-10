#include "main.h"

/**
 * print_string - display string
 * @s: string
 * Return: nothing
 */
void print_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	print_string(argv[argc - 1]);
	return (0);
}
