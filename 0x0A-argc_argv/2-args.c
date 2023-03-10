#include "main.h"

/**
 * main - entry function
 * @argc: argument count
 * @argv: argument array
 * Return: 0 as successs
 */
int main(int argc, char *argv[])
{
	int i, u;
	char *s;

	for (u = 0; u < argc; u++)
	{
		i = 0;
		s = argv[u];
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
