#include "main.h"
#include <string.h>

int wildcmp_helper(char *str1, char *str2, int i, int j);
/**
 * wildcmp - function
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the result if strings is equal
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2, 0, 0));
}

/**
 * wildcmp_helper - function
 * @str1: string 1
 * @str2: string 2
 * @i: integer
 * @j: integer
 *
 * Return: the result if strings is equal
 */
int wildcmp_helper(char *str1, char *str2, int i, int j)
{
	int k, l;

	if (str1[i] == '\0' && str2[j] == '\0')
		return (1);
	if (str2[j] == '*')
	{
		if (str2[j + 1] == '\0')
			return (1);
		k = wildcmp_helper(str1, str2, i, j + 1);
		l = (str1[i] != '\0' && wildcmp_helper(str1, str2, i + 1, j));
		return (k || l);
	}
	if (str1[i] == str2[j])
		return (wildcmp_helper(str1, str2, i + 1, j + 1));
	return (0);
}
