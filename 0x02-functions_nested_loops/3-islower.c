#include "main.h"

/**
 * _islower check if char c is lower and return 1 or 0
 *
 * @c: character to check
 * Return: Always 0 (Success)
 */
int _islower(char c)
{
	return ((c > 97 && c < 127) ? 1 : 0);
}
