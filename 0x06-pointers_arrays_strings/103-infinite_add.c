#include "main.h"
#include <string.h>

/**
 * reverse_array2 - Reverse array
 * @r: array
 * @nc1: array length
 * Return: result nothing
 */
void reverse_array2(char *r, int nc1)
{
	int i;
	char temp;

	for (i = 0; i < nc1 / 2; i++)
	{
		temp = r[i];
		r[i] = r[nc1 - i - 2];
		r[nc1 - i - 2] = temp;
	}
}

/**
 * infinite_add - addition infinite number
 * @n1: character n1 need to be add to second
 * @n2: character n2 need to be add first
 * @r: character r
 * @size_r: integer size of a given array
 * Return: character
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned int max_n = 0, ret = 0, res = 0, nc1 = 1, v1 = 0, v2 = 0;
	int i;

	max_n = strlen(n1) > strlen(n2) ? strlen(n1) : strlen(n2);
	for (i = 0; i < size_r; i++)
	{
		if (nc1 > strlen(n1) && nc1 > strlen(n2) && ret == 0 && nc1 >= max_n)
		{
			r[nc1 - 1] = '\0';
			continue;
		}
		if (nc1 > strlen(n1))
			v1 = 0;
		else
			v1 = (int)(n1[strlen(n1) - nc1] - 48);
		if (nc1 > strlen(n2))
			v2 = 0;
		else
			v2 = (int)(n2[strlen(n2) - nc1] - 48);

		res = v1 + v2 + ret;
		if (res >= 10)
		{
			ret = 1;
			res = res - 10;
		}
		else
			ret = 0;
		r[nc1 - 1] = (char)res + '0';
		nc1++;
	}
	if ((int)nc1 - 1 <= size_r - 1)
	{
		reverse_array2(r, nc1);
		return (r);
	}
	return (0);
}
