#include "main.h"
#include <string.h>

/**
 * _memcpy - check the code
 * @dest: string
 * @src: string
 * @n: number of bit
 *
 * Return: pointer to char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
