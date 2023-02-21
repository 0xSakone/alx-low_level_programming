#include "main.h"

/**
 * _islower - check if a given argument is lower and give result
 * The argument should be char
 *
 * @c: character to check
 *
 * Return: 1 if its lower and 0 else
 */
int _islower(char c)
{
	return ((c > 97 && c < 127) ? 1 : 0);
}
