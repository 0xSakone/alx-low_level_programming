#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - entry function
 * @str: string
 * Return: array string
 */
char **strtow(char *str)
{
	char **b;
	int i = 0, t = 0, c, g = 1, w = 0;

	if (strlen(str) == 0 || str == NULL)
		return (NULL);
	c = strlen(str);
	while (i < c)
	{
		if (str[i] == ' ' && g != 1)
		{
			t++;
			g = 1;
		}
		else if (str[i] != ' ' && g == 1)
		{
			w++;
			g = 0;
		}
		else if (str[i] != ' ')
		{
			t++;
			g = 0;
		}
		i++;
	}
	b = malloc(w);
	i = 0;
	return (b);
}
