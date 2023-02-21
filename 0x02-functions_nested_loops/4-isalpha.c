#include "main.h"

/**
 * _isalpha - check if a given argument is alpha and give result
 * The argument should be char
 *
 * @c: character to check
 *
 * Return: 1 if its alpha and 0 else
 */
int _isalpha(char c)
{
	if (((c > 97 && c < 127) || (c > 64 && c < 91) || (c > 47 && c < 57)))
	{
		return (1);
	}
	return (0);

}
