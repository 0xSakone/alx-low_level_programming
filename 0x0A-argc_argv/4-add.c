#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
				printf("Error\n");
				return (1);
			}
			u++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
