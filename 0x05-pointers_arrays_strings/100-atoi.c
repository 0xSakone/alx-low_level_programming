#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "main.h"

/**
 * _atoi - print last n of half
 * @s: given string
 * Return: copied
 */
int _atoi(char *s)
{
	int i, sign = 1;

	for (i = 0; i < (int)strlen(s) - 1; i++)
		if (s[i] == '-')
			sign = sign * -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	return ((atoi(&s[i]) * (pow(10, 1) / 10)) * sign);
}
