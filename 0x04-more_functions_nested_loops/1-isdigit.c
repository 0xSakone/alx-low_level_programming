#include "main.h"

/**
 * _isdigit - check if a given argument is a digit and give result
 * The argument should be char
 *
 * @d: character to check
 *
 * Return: 1 if its digit and 0 else
 */
int _isdigit(int d)
{
	return ((d >= 48 && d <= 57) ? 1 : 0);
}
