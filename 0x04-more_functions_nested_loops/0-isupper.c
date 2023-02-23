#include "main.h"

/**
 * _isupper - check if a given argument is upper and give result
 * The argument should be char
 *
 * @c: character to check
 *
 * Return: 1 if its lower and 0 else
 */
int _isupper(char c)
{
	return ((c >= 65 && c <= 90) ? 1 : 0);
}
