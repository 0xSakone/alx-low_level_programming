#include "main.h"
#include <string.h>

/**
 * _memset - check the code
 * @s: string
 * @b: character
 * @n: number of bit
 * 
 * Return: pointer to char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
