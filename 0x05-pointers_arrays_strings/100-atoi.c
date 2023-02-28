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
	int i, start_n = 0, nfind = 0, sign = 1;

	for (i = 0; i < (int)strlen(s) - 1; i++)
	{
		if (nfind == 0 && (s[i] == '-'))
			sign *= -1;
		else if (nfind == 0 && (s[i] >= '0' && s[i] <= '9'))
		{
			start_n = i;
			nfind = 1;
		}
		else if (nfind == 1 && !(s[i] >= '0' && s[i] <= '9'))
		{
			break;
		}
	}

	return ((atoi(&s[start_n]) * (pow(10, 1) / 10)) * sign);
}
