#include "main.h"
#include <math.h>

#include <string.h>

int is_palindrome_helper(char *str, int start, int end);

/**
 * is_palindrome - function
 * @str: string
 *
 * Return: the result if n is prime number
 */
int is_palindrome(char *str)
{
	int len = strlen(str);

	return (is_palindrome_helper(str, 0, len - 1));
}

/**
 * is_palindrome_helper - function
 * @str: string
 * @start: integer
 * @end: integer
 *
 * Return: the result if n is prime number
 */
int is_palindrome_helper(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] != str[end])
		return (0);
	return (is_palindrome_helper(str, start + 1, end - 1));
}
